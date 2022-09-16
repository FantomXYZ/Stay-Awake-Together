#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QImage>

#include<QVector>

class Player
{

public:

    Player();
    ~Player();
    QImage skin;
    float x_pos;
    float y_pos;


    QVector<QImage> walk;





};

#endif // PLAYER_H

