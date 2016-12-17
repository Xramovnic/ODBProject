#ifndef ELM_H
#define ELM_H

#include <QObject>
#include <QStringList>
#include <QDebug>
#include <../qserialdevice/src/qserialdeviceenumerator/serialdeviceenumerator.h>
#include <../qserialdevice/src/qserialdevice/abstractserial.h>
#include "OBD.h"

struct commandELM
{
   int pid;
   QString commanda;
   unsigned int  data[];
};

struct PIDELM
{

};



class ELM : public QObject
{
    Q_OBJECT
public:
    explicit ELM(QObject *parent = 0);
    QStringList GetEnabledCom(void) {return this->enablecom;}
    QString GetNameCom(void) {return elmdevice->deviceName();}

private:
   SerialDeviceEnumerator *m_sde;
   QStringList enablecom;
   AbstractSerial *elmdevice;
   QString datariceve;
   commandELM *lastRecive;
   QStringList SendPID;
   condition conditionELM;
   bool connectELM;
   bool ParseELMCommand(commandELM* cmd);
   unsigned int PIDAcsses[10];

signals:
   void ELMDataRecive(QString data);
   void ELMReset(QString data);

public slots:
   void slotPrintAllDevices(const QStringList &list);
   bool slotOpenPort(const QString &namedevice);
   void slotClosePort(void);
   bool slotWriteELMDate(char* data);
   bool slotDataReceive(void);
   bool slotStart(void);
   void slotELMReset(void);
};

#endif // ELM_H
