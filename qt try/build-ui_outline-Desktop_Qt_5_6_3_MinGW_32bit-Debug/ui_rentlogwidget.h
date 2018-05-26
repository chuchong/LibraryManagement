/********************************************************************************
** Form generated from reading UI file 'rentlogwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENTLOGWIDGET_H
#define UI_RENTLOGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RentLogWidget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *RentLogWidget)
    {
        if (RentLogWidget->objectName().isEmpty())
            RentLogWidget->setObjectName(QStringLiteral("RentLogWidget"));
        RentLogWidget->resize(800, 640);
        tabWidget = new QTabWidget(RentLogWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 741, 641));
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(RentLogWidget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(RentLogWidget);
    } // setupUi

    void retranslateUi(QWidget *RentLogWidget)
    {
        RentLogWidget->setWindowTitle(QApplication::translate("RentLogWidget", "Form", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("RentLogWidget", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("RentLogWidget", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RentLogWidget: public Ui_RentLogWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTLOGWIDGET_H
