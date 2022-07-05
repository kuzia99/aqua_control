#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMqttClient>
#include "form.h"

#define MQTT_HOST "ENTER_HOST_HERE"
#define MQTT_PORT 9991

#define MQTT_USERNAME "ENTER_USERNAME_HERE"
#define MQTT_PASSWORD "ENTER_PASSWORD_HERE"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setSettings();


public slots:
    void connectServ();
    void stateChangedStatus();
    void brokerDisconnectedState();

private slots:
    void on_action_2_triggered();
    void on_Clicked();

    void on_pushButtonLight_clicked();

    void on_pushButtonManual_clicked();

    void on_spinBoxTimeOn_valueChanged(int arg1);

    void on_spinBoxTimeOff_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    Form *form;
    QMqttClient *m_client;


};

 static struct MqttSet
{
    QString Addr = MQTT_HOST;
    int port = MQTT_PORT;
    QString Login = MQTT_USERNAME;
    QString Pass = MQTT_PASSWORD;

    bool stateLight;
    bool stateMode;
    uint8_t timeOn;
    uint8_t timeOff;
}MqttSetting;

#endif // MAINWINDOW_H
