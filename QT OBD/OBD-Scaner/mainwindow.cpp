#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  //  statuscom = new QLabel();
    //this->statusBar()->addWidget(statuscom);
  //  statuscom->setText("ZZZ");
    ui->setupUi(this);
    ELM elm;
    ui->comboBox->addItems(elm.GetEnabledCom());
    connect(&(this->elm), SIGNAL(ELMDataRecive(QString)),SLOT(slotElmDataResive(QString)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
   bool rez = elm.slotOpenPort(ui->comboBox->currentText());
  // connect(&(this->elm), SIGNAL(ELMDataRecive(QString)),SLOT(slotElmDataResive(QString)));
 //  if (rez)
   //    statuscom->setText("Открыт");
  // else
      // statuscom->setText(elm.elmdevice->deviceName() + "Закрыт");
}

void MainWindow::on_pushButton_clicked()
{
    elm.slotClosePort();
}

void MainWindow::on_pushButton_3_clicked()
{
    QString data;
    data=ui->plainTextEdit->document()->toPlainText();
    elm.slotWriteELMDate(data.toAscii().data());
}

void MainWindow::slotElmDataResive(QString data)
{
    ui->textEdit->append("->"+data);
}
