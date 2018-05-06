#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include <QAbstractButton>
#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

    void on_pushButton_clicked();

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
