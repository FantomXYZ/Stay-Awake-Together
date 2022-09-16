/********************************************************************************
** Form generated from reading UI file 'play_w.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY_W_H
#define UI_PLAY_W_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_play_w
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *play_w)
    {
        if (play_w->objectName().isEmpty())
            play_w->setObjectName(QString::fromUtf8("play_w"));
        play_w->resize(514, 456);
        pushButton = new QPushButton(play_w);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 150, 111, 41));

        retranslateUi(play_w);

        QMetaObject::connectSlotsByName(play_w);
    } // setupUi

    void retranslateUi(QWidget *play_w)
    {
        play_w->setWindowTitle(QCoreApplication::translate("play_w", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("play_w", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class play_w: public Ui_play_w {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY_W_H
