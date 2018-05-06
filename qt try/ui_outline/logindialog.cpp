#include "logindialog.h"
#include "ui_logindialog.h"
#include "libman.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    if(true)
        libman::toMainWindow();
}


void LoginDialog::on_pushButton_clicked()
{
    libman::toRegister();
}
