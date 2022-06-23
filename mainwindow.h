#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMqttClient>
#include "form.h"

#define MQTT_HOST "srv2.clusterfly.ru"
#define MQTT_PORT 9991

#define MQTT_USERNAME "user_7b2e8105"
#define MQTT_PASSWORD "pass_a0a86fb4"

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
