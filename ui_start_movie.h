/********************************************************************************
** Form generated from reading UI file 'start_movie.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_MOVIE_H
#define UI_START_MOVIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Start_Movie
{
public:

    void setupUi(QWidget *Start_Movie)
    {
        if (Start_Movie->objectName().isEmpty())
            Start_Movie->setObjectName(QString::fromUtf8("Start_Movie"));
        Start_Movie->resize(400, 300);

        retranslateUi(Start_Movie);

        QMetaObject::connectSlotsByName(Start_Movie);
    } // setupUi

    void retranslateUi(QWidget *Start_Movie)
    {
        Start_Movie->setWindowTitle(QCoreApplication::translate("Start_Movie", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Start_Movie: public Ui_Start_Movie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_MOVIE_H
