#include "elm.h"

ELM::ELM(QObject *parent) :
    QObject(parent)
{
    connectELM=false;
    m_sde = SerialDeviceEnumerator::instance();
    elmdevice = new AbstractSerial();
    lastRecive = new commandELM();
    lastRecive->pid=0;
    lastRecive->commanda="0";
    connect(m_sde, SIGNAL(hasChanged(QStringList)),this, SLOT(slotPrintAllDevices(QStringList)));
    connect(elmdevice, SIGNAL(readyRead()), this, SLOT(slotDataReceive()));
    slotPrintAllDevices(this->m_sde->devicesAvailable());
}

bool ELM::ParseELMCommand(commandELM* cmd)
{
    switch(cmd->commanda.toInt())
    {
        case PIDSupport:
        PIDAcsses[cmd->pid]=0;
        for (int i=0;i<4;i++)
         {
            PIDAcsses[cmd->pid]+=cmd->data[i]<<(24-(i*8));
        //    qDebug()<<cmd->data[i];
        //    qDebug()<<PIDAcsses[cmd->pid];
         }
        qDebug()<<"cmd 0"<< PIDAcsses[cmd->pid];
        break;

   //TEMP water
  //      case 5:


    }

}


void ELM::slotPrintAllDevices(const QStringList &list)
{
    enablecom.clear();
    foreach (QString s, list) {
       m_sde->setDeviceName(s);
       enablecom.append(this->m_sde->name());
      /*qDebug() << "\n <<< info about: " << this->m_sde->name() << " >>>";
        qDebug() << "-> description  : " << this->m_sde->description();
        qDebug() << "-> driver       : " << this->m_sde->driver();
        qDebug() << "-> friendlyName : " << this->m_sde->friendlyName();
        qDebug() << "-> hardwareID   : " << this->m_sde->hardwareID();
        qDebug() << "-> locationInfo : " << this->m_sde->locationInfo();
        qDebug() << "-> manufacturer : " << this->m_sde->manufacturer();
        qDebug() << "-> productID    : " << this->m_sde->productID();
        qDebug() << "-> service      : " << this->m_sde->service();
        qDebug() << "-> shortName    : " << this->m_sde->shortName();
        qDebug() << "-> subSystem    : " << this->m_sde->subSystem();
        qDebug() << "-> systemPath   : " << this->m_sde->systemPath();
        qDebug() << "-> vendorID     : " << this->m_sde->vendorID();

        qDebug() << "-> revision     : " << this->m_sde->revision();
        qDebug() << "-> bus          : " << this->m_sde->bus();
        //
        qDebug() << "-> is exists    : " << this->m_sde->isExists();
        qDebug() << "-> is busy      : " << this->m_sde->isBusy();*/
    };
    qDebug() << "\n ===> All devices: " << enablecom;
}

bool ELM::slotOpenPort(const QString &namedevice)
{
    elmdevice->setDeviceName(namedevice);
    m_sde->setDeviceName(namedevice);

    if  (m_sde->isBusy())
    {
         qDebug() << "port busy";
         connectELM=false;
         return false;
    };

    if (elmdevice->open(AbstractSerial::ReadWrite))
        {
            qDebug() << "Serial device " << elmdevice->deviceName() << " open in " << elmdevice->openMode();
            connectELM=true;
            slotStart();
            return true;
        }
    else
        connectELM=false;
        qDebug() << "Error open port";
    return false;
}

void ELM::slotClosePort()
{
    this->elmdevice->close();
}

bool ELM::slotWriteELMDate(char* data)
{
    elmdevice->write(data);
    elmdevice->write("\n\r");
     qDebug() << "Writed is : " << data << " bytes";
     return true;
}


bool ELM::slotDataReceive()
{
    QByteArray byte;
    int i;
    if (elmdevice && elmdevice->isOpen())
       {
             byte = elmdevice->readAll();
             QString data(byte);
            // qDebug()<< "1" << data;

             i= data.indexOf(ELM_ERROR);
             if (i>=0)
             {
                 conditionELM=BADCOMAND;
                 emit ELMDataRecive(data);
                 return false;
             };


             i= data.indexOf(ELM_GET);
             if (i>=0 && connectELM)
             {
                 conditionELM=READY;
             };

             i= data.indexOf(ELM_CONNECT);
             if (i>=0)
             {
                 connectELM=true;
                 slotWriteELMDate(ELM_SET_PROTOCOL);
                 slotWriteELMDate(ELM_HANDLER_DISBALE);
                 slotWriteELMDate(ELM_GETPID);
                 emit ELMDataRecive(data);
                 return true;
             };

             i=data.indexOf("4");
             if (i>=0 && connectELM)
             {
                  QChar s;
                  QString valuestr,answer;
                  bool bStatus = false;
                  long int nHex=0;
                  int dataCount=0;

                  answer=data.right(data.length()-(i+1));;
                  int count=0;
                  for(int z=0 ;z<answer.length();++z)
                  {
                     s=answer.at(z);
                    // qDebug()<<s;
                     if (!s.isSpace())
                        {
                             ++count;
                             if (count<2)
                             {
                                  lastRecive->pid=s.digitValue();
                                  continue;
                             };

                             if (count>1 && count<4)
                             {
                                 valuestr+=s;
                                 if (count==3)
                                 {
                                   lastRecive->commanda=valuestr;
                                //   qDebug()<<lastcomand->commanda<<"-"<<lastcomand->pid;
                                   valuestr="";
                                 };
                                 continue;
                             };

                             valuestr+=s;
                             if (count%2!=0)
                             {
                                // qDebug()<<valuestr;
                                 nHex = valuestr.toInt(&bStatus,16);
                              //   qDebug()<<nHex;
                                 if (bStatus)
                                 {
                                      lastRecive->data[dataCount++]=nHex;
                                      valuestr="";

                                 }
                             }

                        };
                   };

             if (lastRecive->commanda < 0)
                 return false;
             ParseELMCommand(lastRecive);
             };
            qDebug()<<lastRecive->pid<<" cmd="<<lastRecive->commanda<<"data"<<lastRecive->data[0]<<lastRecive->data[1]<<lastRecive->data[2]<<lastRecive->data[3];
            // emit ELMDataRecive(data);
             return true;
        };
    return false;
}

bool ELM::slotStart()
{
   slotELMReset();
   return true;
}

void ELM::slotELMReset()
{
    if(connectELM)
    {
        slotWriteELMDate(ELM_RESET);
    }
}

