#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <elm.h>
#include <QtGui>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ELM elm;
    ~MainWindow();
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();


public slots:
    void slotElmDataResive(QString data);

private:
    Ui::MainWindow *ui;
    QLabel* statuscom;
};

#endif // MAINWINDOW_H
