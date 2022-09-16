#ifndef WIN_H
#define WIN_H

#include <QWidget>
#include<QPainter>

namespace Ui {
class Win;
}

class Win : public QWidget
{
    Q_OBJECT

public:
    explicit Win(QWidget *parent = nullptr);
    ~Win();

private:
    Ui::Win *ui;

protected:
    void paintEvent(QPaintEvent *) override;
};

#endif // WIN_H
