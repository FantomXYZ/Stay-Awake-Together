#ifndef SKIN_MENU_H
#define SKIN_MENU_H

#include <QWidget>
#include<start_movie.h>
#include<game.h>

namespace Ui {
class Skin_Menu;
}

class Skin_Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Skin_Menu(QWidget *parent = nullptr);
    ~Skin_Menu();
    void start();
    int type;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Skin_Menu *ui;
};

#endif // SKIN_MENU_H
