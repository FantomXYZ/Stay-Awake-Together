#ifndef LOSE_H
#define LOSE_H

#include <QWidget>
#include<QPainter>

namespace Ui {
class Lose;
}

class Lose : public QWidget
{
    Q_OBJECT

public:
    explicit Lose(QWidget *parent = nullptr);
    ~Lose();

private:
    Ui::Lose *ui;

protected:
    void paintEvent(QPaintEvent *) override;
};

#endif // LOSE_H
