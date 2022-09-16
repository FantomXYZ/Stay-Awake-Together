#include "skin_menu.h"
#include "ui_skin_menu.h"

Skin_Menu::Skin_Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Skin_Menu)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("Stay Awake Together"));

    setFixedSize(1480,690);




}

Skin_Menu::~Skin_Menu()
{
    delete ui;
}

void Skin_Menu::start()
{
    this->hide();
    Start_Movie *movie = new Start_Movie;
    movie->type = type;
    movie->show();
}

void Skin_Menu::on_pushButton_clicked()
{
    type = 0;
    start();
}


void Skin_Menu::on_pushButton_2_clicked()
{
    type = 1;
    start();
}


void Skin_Menu::on_pushButton_3_clicked()
{
    type = 2;
    start();
}


void Skin_Menu::on_pushButton_4_clicked()
{
    type = 3;
    start();
}

