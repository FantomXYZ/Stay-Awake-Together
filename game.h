#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include<QPainter>
#include<player.h>
#include <QKeyEvent>
#include<QVector>
#include <QMouseEvent>
#include <background.h>
#include <QTimer>
#include<lose.h>
#include<win.h>



namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();
    Player cat;
    Background room;
    void new_game();
    QVector<bool> key_press;
    void cheak_f();
    void change_back();
    bool f;
    QTimer *game_timer;
    QTimer *event_timer;

    QVector<QString> events;

    int delta_time;
    int game_minutes;
    int game_seconds;


    int event_time;
    int anim_stage;

    QImage monster_img;

    void lose();
    void win();

    void start_event();

    bool bar;

    int skin_type;


private:
    Ui::Game *ui;

protected:
    void paintEvent(QPaintEvent *) override;
    void keyPressEvent(QKeyEvent *e) override;
    void keyReleaseEvent(QKeyEvent *e) override;
    void mousePressEvent(QMouseEvent *e) override;

private slots:
    void GameTimerSlot();
    void EventTimerSlot();
};

#endif // GAME_H
