#include "game.h"
#include "ui_game.h"
#include <iostream>

Game::Game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("Stay Awake Together"));


    key_press.push_back(false);
    key_press.push_back(false);
    key_press.push_back(false);
    key_press.push_back(false);

    events.push_back(QString("HAND"));


    delta_time = 0;
    game_seconds = 0;
    game_minutes = 0;
    game_timer = new QTimer(this);
    connect(game_timer,SIGNAL(timeout()),this,SLOT(GameTimerSlot()));
    game_timer->start(1000);//!!!!!!!!

    monster_img = QImage();
    event_timer = new QTimer(this);
    connect(event_timer,SIGNAL(timeout()),this,SLOT(EventTimerSlot()));

    bar = false;

}

void Game::GameTimerSlot(){
    game_seconds++;
    delta_time++;
    if(game_seconds == 60){
        game_minutes++;
        game_seconds = 0;
    }


    if(delta_time == 20 && events[0]=="HAND"){
        event_time = 23;
        room.img = QImage(":/background/src/graphics/static pictures/backgrounds/stay_awake_bedroom.png");
        monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/monster_hand_1.png");
        bar = true;
        event_timer->start(1000);

    }
    if(delta_time == 5 && events[0]=="HEAD_L"){
        event_time = 15;
        room.img = QImage(":/background/src/graphics/static pictures/backgrounds/stay_awake_bedroom.png");
        monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/pixil-frame-0 (43).png");
        bar = true;
        event_timer->start(1000);
    }

    if(delta_time == 5 && events[0]=="HEAD_R"){
        event_time = 15;
        room.img = QImage(":/background/src/graphics/static pictures/backgrounds/stay_awake_bedroom.png");
        monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/pixil-frame-0 (43).png");
        bar = true;
        event_timer->start(1000);
    }
    if(delta_time == 5 && events[0]=="EYE"){
        event_time = 23;
        room.img = QImage(":/background/src/graphics/static pictures/backgrounds/stay_awake_bedroom.png");
        monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op0.png");
        bar = true;
        event_timer->start(1000);
    }
    if(delta_time == 2 && events[0]=="WIN"){
        event_time = 18;
        room.img = QImage(":/background/src/graphics/static pictures/backgrounds/stay_awake_bedroom.png");
        monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op9.png");
        bar = false;
        event_timer->start(1000);
    }


    repaint();

}

void Game::EventTimerSlot(){
    --event_time;



    if(event_time == 0 && events[0]!=""){
        lose();
    }
    start_event();
    repaint();
}

Game::~Game()
{
    delete ui;
}

void Game::new_game()
{
    cat.x_pos = 985;
    cat.y_pos = 85;

    switch (skin_type) {
        case 0:
            cat.skin = QImage(":/chars/src/graphics/static pictures/chars/pixil-frame-0 (4).png");
            break;
        case 1:
            cat.skin = cat.skin = QImage(":/chars/src/graphics/static pictures/chars/pixil-frame-0 (5).png");
            break;
        case 2:
            cat.skin = cat.skin = QImage(":/chars/src/graphics/static pictures/chars/pixil-frame-0 (6).png");
            break;
        case 3:
            cat.skin = cat.skin = QImage(":/chars/src/graphics/static pictures/chars/pixil-frame-0 (7).png");
            break;
    }


    room.img = QImage(":/background/src/graphics/static pictures/backgrounds/stay_awake_bedroom.png");
    f = false;
}

void Game::cheak_f()
{
    if(cat.x_pos>=1030 && cat.x_pos <= 1120 && cat.y_pos >= 200 && cat.y_pos<=295 ){
        f = true;
    } else if(cat.x_pos>=245 && cat.x_pos <= 320 && cat.y_pos >= 340 && cat.y_pos<=395){
        f = true;
    } else if(cat.x_pos>=130 && cat.x_pos <= 215 && cat.y_pos >= 45 && cat.y_pos<=75){
        f = true;
    } else if(cat.x_pos>=325 && cat.x_pos <= 410 && cat.y_pos >= 45 && cat.y_pos<=55){
        f = true;
    } else if(cat.x_pos>=865 && cat.x_pos <= 950 && cat.y_pos >= 45 && cat.y_pos<=55){
        f = true;
    } else{
        f = false;
    }
}

void Game::change_back()
{
    if(cat.x_pos>=1030 && cat.x_pos <= 1120 && cat.y_pos >= 200 && cat.y_pos<=295){
        room.img = QImage(":/background/src/graphics/static pictures/backgrounds/candle_window_burning.png");
    }
    if(cat.x_pos>=245 && cat.x_pos <= 320 && cat.y_pos >= 340 && cat.y_pos<=395){
        room.img = QImage(":/background/src/graphics/static pictures/backgrounds/candle_flower_burning.png");
    }
    if(cat.x_pos>=130 && cat.x_pos <= 215 && cat.y_pos >= 45 && cat.y_pos<=75){
        room.img = QImage(":/background/src/graphics/static pictures/backgrounds/candle_piano_burning.png");
    }
    if(cat.x_pos>=325 && cat.x_pos <= 410 && cat.y_pos >= 45 && cat.y_pos<=60){
        room.img = QImage(":/background/src/graphics/static pictures/backgrounds/lightbulb_table.png");
    }
    if(cat.x_pos>=865 && cat.x_pos <= 950 && cat.y_pos >= 45 && cat.y_pos<=55){
        room.img = QImage(":/background/src/graphics/static pictures/backgrounds/lightbulb_bed.png");
    }
}

void Game::lose()
{
    bar = false;
    monster_img = QImage();
    Lose *lose = new Lose;
    lose->setFixedSize(1480,690);
    this->hide();
    if(events[0]!=""){
        lose->show();
    }


}

void Game::win()
{
    event_timer->stop();
    bar = false;
    monster_img = QImage();
    Win *win = new Win;
    win->setFixedSize(1480,690);
    this->hide();
    win->show();
}

void Game::start_event()
{
    if(events[0]=="HAND"){
        switch(event_time){
        case 20:
            monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/monster_hand_2.png");
            break;
        case 18:
            monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/monster_hand_3.png");
            break;
        case 16:
            monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/monster_hand_4.png");
            break;
        case 14:
            monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/monster_hand_5.png");
            break;
        case 12:
            monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/monster_hand_6.png");
            break;
        case 10:
            monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/monster_hand_7.png");
            break;
        case 8:
            monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/monster_hand_8.png");
            break;
        case 6:
            monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/monster_hand_9.png");
            break;
        case 4:
            monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/monster_hand_10.png");
            break;
        case 2:
            monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/monster_hand_11.png");
            break;

        }
        if(room.img==QImage(":/background/src/graphics/static pictures/backgrounds/candle_window_burning.png")){
            events[0]="HEAD_L";
            event_timer->stop();
            bar = false;
            monster_img = QImage();
            delta_time = 0;
        }
    }
    if(events[0]=="HEAD_L" || events[0]=="HEAD_R"){
        switch(event_time){
            case 12:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/pixil-frame-0 (42).png");
                break;
            case 10:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/pixil-frame-0 (41).png");
                break;
            case 8:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/pixil-frame-0 (40).png");
                repaint();
                break;
            case 6:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/pixil-frame-0 (39).png");
                break;
            case 4:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/pixil-frame-0 (38).png");
                break;
            case 2:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/pixil-frame-0 (37).png");
                break;
        }
        if(room.img==QImage(":/background/src/graphics/static pictures/backgrounds/candle_flower_burning.png") && events[0]=="HEAD_L"){
            events[0]="HEAD_R";
            event_timer->stop();
            bar = false;
            monster_img = QImage();
            delta_time = 0;
        }
        if(room.img==QImage(":/background/src/graphics/static pictures/backgrounds/lightbulb_bed.png") && events[0]=="HEAD_R"){
            events[0]="EYE";
            event_timer->stop();
            bar = false;
            monster_img = QImage();
            delta_time = 0;
        }
    }
    if(events[0]=="EYE"){
        switch(event_time){
            case 22:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op1.png");
                break;
            case 20:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op2.png");
                break;
            case 18:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op3.png");
                break;
            case 16:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op4.png");
                break;
            case 14:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op5.png");
                break;
            case 12:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op6.png");
                break;
            case 10:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op7.png");
                break;
            case 8:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op8.png");
                break;
            case 6:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op9.png");
                break;
            case 4:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_op10.png");
                break;
        }
        if(room.img==QImage(":/background/src/graphics/static pictures/backgrounds/lightbulb_table.png")){
            events[0]="WIN";
            event_timer->stop();
            bar = false;
            monster_img = QImage();
            delta_time = 0;
        }
    }
    if(events[0]=="WIN"){
        switch(event_time){
            case 16:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_cl0.png");
                break;
            case 14:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_cl1.png");
                break;
            case 12:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_cl2.png");
                break;
            case 10:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_cl3.png");
                break;
            case 8:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_cl4.png");
                break;
            case 6:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_cl5.png");
                break;
            case 4:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_cl6.png");
                break;
            case 2:
                monster_img = QImage(":/monsters_anim/src/graphics/animations/monster/eye_cl7.png");
                break;
            case 1:
                events[0]="";

                event_timer->stop();
                win();
                break;
        }
    }

}

void Game::paintEvent(QPaintEvent *)
{
    QPainter painter;
    painter.begin(this);

    painter.drawImage(0,0,room.img);

    if(f){
        painter.drawImage(cat.x_pos + 32,cat.y_pos - 53,QImage(":/do/src/graphics/do/f.png"));
    }

    if(events[0]=="HAND"){
        painter.drawImage(975,185,monster_img);
    }
    if(events[0]=="HEAD_L"){
        painter.drawImage(250,290,monster_img);
    }
    if(events[0]=="EYE"){
        painter.drawImage(218,-48,monster_img);
    }
    if(events[0]=="HEAD_R"){
        painter.drawImage(985,80,monster_img);
    }
    if(events[0]=="WIN"){
        painter.drawImage(218,-48,monster_img);
    }



    painter.drawImage(cat.x_pos,cat.y_pos,cat.skin);


    QFont font = painter.font();
    font.setPixelSize(35);
    painter.setFont(font);
    painter.setPen(Qt::white);
    painter.drawText(QPoint(1335,60),QString::number(game_minutes)+QString(":")+QString::number(game_seconds));

    if(bar){
        painter.drawText(QPoint(1335,160),QString::number(event_time));
    }



    painter.end();
}

void Game::keyPressEvent(QKeyEvent *e)
{

    if(e->key()==Qt::Key::Key_W){
        key_press[0] = true;
    }
    if(e->key()==Qt::Key::Key_A){
        key_press[1] = true;
    }
    if(e->key()==Qt::Key::Key_S){
        key_press[2] = true;
    }
    if(e->key()==Qt::Key::Key_D){
        key_press[3] = true;
    }

    if(key_press[0] && key_press[1] && cat.x_pos != 20 && cat.y_pos != 50){
        cat.y_pos -= 5;
        cat.x_pos -= 5;
    } else if(key_press[0] && key_press[3] && cat.x_pos != 1155 && cat.y_pos != 50){
        cat.y_pos -= 5;
        cat.x_pos += 5;
    } else if(key_press[2] && key_press[3] && cat.x_pos != 1155 && cat.y_pos != 475){
        cat.y_pos += 5;
        cat.x_pos += 5;
    } else if(key_press[2] && key_press[1] && cat.x_pos != 20 && cat.y_pos != 475){
        cat.y_pos += 5;
        cat.x_pos -= 5;
    } else if(key_press[0] && cat.y_pos != 50){
        cat.y_pos -= 5;
    } else if(key_press[1] && cat.x_pos != 20){
        cat.x_pos -= 5;
    } else if(key_press[2] && cat.y_pos != 475){
        cat.y_pos += 5;
    } else if(key_press[3] && cat.x_pos != 1155){
        cat.x_pos += 5;
    }

    cheak_f();

    if(e->key()==Qt::Key_F && f){
        change_back();
    }
    repaint();

}

void Game::keyReleaseEvent(QKeyEvent *e)
{
    if(e->key()==Qt::Key::Key_W){
        key_press[0] = false;
    }
    if(e->key()==Qt::Key::Key_A){
        key_press[1] = false;
    }
    if(e->key()==Qt::Key::Key_S){
        key_press[2] = false;
    }
    if(e->key()==Qt::Key::Key_D){
        key_press[3] = false;
    }


    cheak_f();
    repaint();
}

void Game::mousePressEvent(QMouseEvent *e)
{
    std::cout << e->pos().x() << "  " << e->pos().y() << std::endl;
}
