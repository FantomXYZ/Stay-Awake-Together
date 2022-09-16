#include "lose.h"
#include "ui_lose.h"

Lose::Lose(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lose)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("Stay Awake Together"));
}

Lose::~Lose()
{
    delete ui;
}

void Lose::paintEvent(QPaintEvent *)
{
    QPainter painter;
    painter.begin(this);
    painter.drawImage(0,0,QImage(":/WL/src/graphics/static pictures/win_lose/pixil-frame-0 (35).png"));
    painter.end();
}
