/********************************************************************************
** Form generated from reading UI file 'skin_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKIN_MENU_H
#define UI_SKIN_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Skin_Menu
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Skin_Menu)
    {
        if (Skin_Menu->objectName().isEmpty())
            Skin_Menu->setObjectName(QString::fromUtf8("Skin_Menu"));
        Skin_Menu->resize(1480, 690);
        label = new QLabel(Skin_Menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1480, 81));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Skin_Menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 90, 245, 550));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/chars/src/graphics/static pictures/chars/pixil-frame-0 (4).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(600, 600));
        pushButton_2 = new QPushButton(Skin_Menu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(445, 90, 245, 550));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/chars/src/graphics/static pictures/chars/pixil-frame-0 (5).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(600, 600));
        pushButton_3 = new QPushButton(Skin_Menu);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(790, 90, 245, 550));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/chars/src/graphics/static pictures/chars/pixil-frame-0 (6).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(600, 600));
        pushButton_4 = new QPushButton(Skin_Menu);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1135, 90, 245, 550));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/chars/src/graphics/static pictures/chars/pixil-frame-0 (7).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(600, 600));
        label_2 = new QLabel(Skin_Menu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 640, 91, 41));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_3 = new QLabel(Skin_Menu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(510, 640, 121, 41));
        label_3->setFont(font1);
        label_4 = new QLabel(Skin_Menu);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(880, 640, 91, 41));
        label_4->setFont(font1);
        label_5 = new QLabel(Skin_Menu);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1220, 640, 91, 41));
        label_5->setFont(font1);

        retranslateUi(Skin_Menu);

        QMetaObject::connectSlotsByName(Skin_Menu);
    } // setupUi

    void retranslateUi(QWidget *Skin_Menu)
    {
        Skin_Menu->setWindowTitle(QCoreApplication::translate("Skin_Menu", "Form", nullptr));
        label->setText(QCoreApplication::translate("Skin_Menu", "\320\222\321\213\320\261\320\265\321\200\320\270 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\266\320\260 \320\264\320\273\321\217 \320\270\320\263\321\200\321\213:", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        label_2->setText(QCoreApplication::translate("Skin_Menu", "\320\226\320\276\321\200\320\264\320\260\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("Skin_Menu", "\320\230\320\275\320\276\320\272\320\265\320\275\321\202\320\270\320\271", nullptr));
        label_4->setText(QCoreApplication::translate("Skin_Menu", "\320\234\321\203\321\200\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("Skin_Menu", "\320\221\320\260\321\200\321\201\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Skin_Menu: public Ui_Skin_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKIN_MENU_H
