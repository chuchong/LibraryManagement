#include "logindialog.h"
#include "mainwindow.h"
#include "register.h"
#include <QObject>
#include "constant.h"

#pragma once

class MainWindow;
class LoginDialog;

namespace libman{
class Mainmsg: public QObject{

};


void toLogin();
void toRegister();
void toMainWindow();
}
