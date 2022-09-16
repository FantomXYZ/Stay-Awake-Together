/********************************************************************************
** Form generated from reading UI file 'win.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_H
#define UI_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Win
{
public:

    void setupUi(QWidget *Win)
    {
        if (Win->objectName().isEmpty())
            Win->setObjectName(QString::fromUtf8("Win"));
        Win->resize(1480, 690);

        retranslateUi(Win);

        QMetaObject::connectSlotsByName(Win);
    } // setupUi

    void retranslateUi(QWidget *Win)
    {
        Win->setWindowTitle(QCoreApplication::translate("Win", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Win: public Ui_Win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_H
