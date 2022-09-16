/********************************************************************************
** Form generated from reading UI file 'lose.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSE_H
#define UI_LOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lose
{
public:

    void setupUi(QWidget *Lose)
    {
        if (Lose->objectName().isEmpty())
            Lose->setObjectName(QString::fromUtf8("Lose"));
        Lose->resize(1480, 690);

        retranslateUi(Lose);

        QMetaObject::connectSlotsByName(Lose);
    } // setupUi

    void retranslateUi(QWidget *Lose)
    {
        Lose->setWindowTitle(QCoreApplication::translate("Lose", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lose: public Ui_Lose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSE_H
