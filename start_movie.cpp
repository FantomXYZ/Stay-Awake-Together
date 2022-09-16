#include "start_movie.h"
#include "ui_start_movie.h"

Start_Movie::Start_Movie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Start_Movie)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("Stay Awake Together"));

    setFixedSize(1480,690);
    frame = 0;

    time = 0;
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(TimerSlot()));
    timer->start(500);
}

Start_Movie::~Start_Movie()
{
    delete ui;
}

void Start_Movie::game()
{
    Game *game = new Game;
    game->setFixedSize(1480,690);
    game->skin_type = type;
    game->new_game();
    this->hide();
    game->show();
}

void Start_Movie::TimerSlot()
{
    ++time;

    if(time == 6){
        frame++;
    }
    if(time==11){
        frame++;
    }
    if(time==16){
        frame++;
    }
    if(time==21){
        frame++;
    }
    if(time==26){
        frame++;
    }
    if(time==31){
        frame++;
    }
    if(time==36){
        frame++;
    }
    if(time==41){
        frame++;
    }
    if(time==55){
        game();
    }

    repaint();

}

void Start_Movie::paintEvent(QPaintEvent *)
{
    QPainter painter;

    painter.begin(this);

    switch(frame){
    case 0:
        painter.drawImage(0,0,QImage(":/movie/src/movie/pixil-frame-0 (21).png"));
        break;
    case 1:
        painter.drawImage(0,0,QImage(":/movie/src/movie/pixil-frame-0 (22).png"));
        break;
    case 2:
        painter.drawImage(0,0,QImage(":/movie/src/movie/pixil-frame-0 (23).png"));
        break;
    case 3:
        painter.drawImage(0,0,QImage(":/movie/src/movie/pixil-frame-0 (25).png"));
        break;
    case 4:
        painter.drawImage(0,0,QImage(":/movie/src/movie/pixil-frame-0 (24).png"));
        break;
    case 5:
        painter.drawImage(0,0,QImage(":/movie/src/movie/pixil-frame-0 (26).png"));
        break;
    case 6:
        painter.drawImage(0,0,QImage(":/movie/src/movie/pixil-frame-0 (27).png"));
        break;
    case 7:
        painter.drawImage(0,0,QImage(":/movie/src/movie/pixil-frame-0 (28).png"));
       break;
    case 8:
        painter.drawImage(0,0,QImage(":/movie/src/movie/pixil-frame-0 (19).png"));
       break;
    }



    painter.end();
}
