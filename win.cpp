#include "win.h"
#include "ui_win.h"

Win::Win(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Win)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("Stay Awake Together"));
}

Win::~Win()
{
    delete ui;
}

void Win::paintEvent(QPaintEvent *)
{
    QPainter painter;
    painter.begin(this);
    painter.drawImage(0,0,QImage(":/WL/src/graphics/static pictures/win_lose/pixil-frame-0 (36).png"));
    painter.end();
}
