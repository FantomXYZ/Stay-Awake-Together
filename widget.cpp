#include "widget.h"
#include "ui_widget.h"
#include<QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget),
      m_movie(":/plot/C:/Users/Asus/Desktop/pixil-gif-drawing (6).gif (1).gif")

{
    setFixedSize(1480,690);

    ui->setupUi(this);
    this->setWindowTitle(QString("Stay Awake Together"));



    ui->label->setMovie( &m_movie );
    ui->label->setGeometry(0,0,1480,690);
    this->setWindowIcon(QIcon(QPixmap()));


    m_movie.start();
}

Widget::~Widget()
{
    delete ui;




}


void Widget::on_pushButton_clicked()
{
    Skin_Menu *menu = new Skin_Menu;
    menu->setFixedSize(1480,690);
    this->hide();
    menu->show();
}

