#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyleFactory>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    form = new Form();
    connect(form, &Form::firstwindow, this, &MainWindow::show);//вызов главного окна из окна настроек

    /* Вводим параметры подключения к брокеру */
    m_client = new QMqttClient(this);
    m_client->setHostname(MQTT_HOST);
    m_client->setPort(MQTT_PORT);

    m_client->setUsername(MQTT_USERNAME);
    m_client->setPassword(MQTT_PASSWORD);

    /* добавим обновление статуса подключения */
    connect(m_client, &QMqttClient::stateChanged, this, &MainWindow::stateChangedStatus);//слот для обновления статуса подключения
    connect(m_client, &QMqttClient::disconnected, this, &MainWindow::brokerDisconnectedState);// слот для вывода статуса разрыва

    /* добавим функцию подключение к брокеру связанную с кнопкой */
    connect(form, &Form::pushConnect, this, &MainWindow::connectServ);


    /* функция получения сообщения от брокера на наши подписанные топики */

    connect(m_client, &QMqttClient::messageReceived, this, [this](const QByteArray &message, const QMqttTopicName &topic) {

        /* задача проверить сопоставлен ли топик с одной из наших кнопок */
        /* и если у нас кнопка, привязанная к топику, изменим цвет этой кнопки учитывая полученной значение
         * если 1 - зеленый
         * если 0 - красный */

        if(topic.name() == "user_7b2e8105/test")
        {
            /* меняем цвет кнопки "Свет" */
            if(message[0] == '1')
                ui->pushButtonLight->setStyleSheet("color: rgb(0, 170, 0);");/* сделать кнопку зеленой */
            else if(message[0] == '0')
                ui->pushButtonLight->setStyleSheet("color: rgb(255, 71, 34);");/* сделать текст кнопки красной */
        }
        else if(topic.name() == "user_7b2e8105/type_working")
        {
            /* меняем цвет кнопки "режим работы" */
            if(message[0]== '1')
                ui->pushButtonManual->setStyleSheet("color: rgb(0, 170, 0);");/* сделать кнопку зеленой */
            else if(message[0]== '0')
                ui->pushButtonManual->setStyleSheet("color: rgb(255, 71, 34);");/* сделать текст кнопки красной */
        }
        else if(topic.name() == "user_7b2e8105/time_on")
        {
            ui->spinBoxTimeOn->setValue(message.toInt());
        }
        else if(topic.name() == "user_7b2e8105/time_off")
        {
            ui->spinBoxTimeOff->setValue(message.toInt());
        }

        });

    m_client->connectToHost();

    m_client->subscribe((QString)"user_7b2e8105/test");
    m_client->subscribe((QString)"user_7b2e8105/type_working");
    m_client->subscribe((QString)"user_7b2e8105/time_on");
    m_client->subscribe((QString)"user_7b2e8105/time_off");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_2_triggered()
{
    form->show();
}

void MainWindow::setSettings()
{
    /* выставляем настройки mqtt подключения из глобальной структуры*/
    m_client->setHostname(MqttSetting.Addr);
    m_client->setPort(MqttSetting.port);
    m_client->setUsername(MqttSetting.Login);
    m_client->setPassword(MqttSetting.Pass);
}

void MainWindow::stateChangedStatus()
{
    const QString content = QLatin1String(": State Change") + QString::number(m_client->state());

    if(QString::number(m_client->state()) == "1")
    {
        /* подключаемся к брокеру*/
        ui->statusbar->showMessage("Подключаемся к брокеру");
    }
    else if(QString::number(m_client->state()) == "2")
    {
        /* подключились к брокеру*/
        ui->statusbar->showMessage("Подключились к брокеру!");

        /* подписываемся на топики */
        m_client->subscribe((QString)"user_7b2e8105/test");
        m_client->subscribe((QString)"user_7b2e8105/type_working");
        m_client->subscribe((QString)"user_7b2e8105/time_on");
        m_client->subscribe((QString)"user_7b2e8105/time_off");
    }
    else
    {
        ui->statusbar->showMessage(content);
    }

}

void MainWindow::brokerDisconnectedState()
{

}

void MainWindow::connectServ()
{
    /* подключаемся к серверу */

    //if (m_client->state() == QMqttClient::Disconnected) {
        //ui->lineEditHost->setEnabled(false);
        //ui->spinBoxPort->setEnabled(false);
        //ui->buttonConnect->setText(tr("Disconnect"));
        m_client->connectToHost();
    // else {
        //ui->lineEditHost->setEnabled(true);
        //ui->spinBoxPort->setEnabled(true);
        //ui->buttonConnect->setText(tr("Connect"));
    //    m_client->disconnectFromHost();
    //}

}

void MainWindow::on_Clicked()
{
    QPushButton* target = qobject_cast<QPushButton*>(sender());
    if (target != nullptr)
    {
        target->setStyleSheet(QString("#%1 { background-color: red; }").arg(target->objectName()));
    }
}
