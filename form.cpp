#include "form.h"
#include "ui_form.h"
#include "mainwindow.h"


Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    ui->lineEditAddr->insert(MqttSetting.Addr);
    ui->lineEditPort->insert(QString::number(MqttSetting.port));
    ui->lineEditLogin->insert(MqttSetting.Login);
    ui->lineEditPassword->insert(MqttSetting.Pass);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    this->close();
    emit firstwindow();
}

void Form::on_pushButtonConnect_clicked()
{
    /* сохраняем настройки в глобальную структуру*/
    MqttSetting.Addr = ui->lineEditAddr->text();
    MqttSetting.port = ui->lineEditPort->text().toInt();
    MqttSetting.Login = ui->lineEditLogin->text();
    MqttSetting.Pass = ui->lineEditPassword->text();

    /* закрываем окно настроек */
    this->close();

    /* выполняем подключение */
    emit pushConnect();
}
