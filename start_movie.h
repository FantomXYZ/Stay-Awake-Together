#ifndef START_MOVIE_H
#define START_MOVIE_H

#include <QWidget>
#include <QTimer>
#include<game.h>
#include<QPainter>

namespace Ui {
class Start_Movie;
}

class Start_Movie : public QWidget
{
    Q_OBJECT

public:
    explicit Start_Movie(QWidget *parent = nullptr);
    ~Start_Movie();
    int frame;

    QTimer *timer;

    int time;

    void game();

    int type;


private:
    Ui::Start_Movie *ui;




private slots:
    void TimerSlot();

protected:
    void paintEvent(QPaintEvent *) override;

};

#endif // START_MOVIE_H
