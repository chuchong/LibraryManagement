#include "libman.h"

namespace libman{

    void toLogin()
    {
        LoginDialog* logindlg = new LoginDialog();
        logindlg->show();
    }

    void toMainWindow()
    {
        if(1)//fun()
        {
            MainWindow * mainwnd = new MainWindow(nullptr,USER_NUM);
            mainwnd -> show();
        }
    }

    void toRegister(){
        Register* registr = new Register();
        registr ->exec();
    }
}
