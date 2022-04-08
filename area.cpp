#include "area.h"

Area::Area(QWidget *parent):QWidget(parent)
{ // создаем саму область и фигуры
    setFixedSize(QSize(300, 200));
    myline = new MyLine(80, 100, 50);
    myrect = new MyRect(220, 100, 50);
    alpha=0;
}

void Area::showEvent(QShowEvent *)
{
    myTimer = startTimer(50); // создать таймер
}

void Area::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(Qt::red); // задаем цвет фигур (линий)
    myline->move(alpha, &painter); // заставляем двигаться
    myrect->move(alpha*(-0.5), &painter); // квадрат двигается медленнее
}

void Area::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == myTimer) // если наш таймер
    {
        alpha=alpha + 0.2;
        update(); // обновить внешний вид
    }
    else
        QWidget::timerEvent(event); // иначе передать для стандартной обработки
}

void Area::hideEvent(QHideEvent *)
{
    killTimer(myTimer); // уничтожить таймер
}

Area::~Area()
{
    delete myline;
    delete myrect;
}
