#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<game.h>
#include <QMovie>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<skin_menu.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();


private:
    Ui::Widget *ui;
    QMovie m_movie;

};
#endif // WIDGET_H
