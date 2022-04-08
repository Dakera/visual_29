#ifndef FIGURA_H
#define FIGURA_H

#include <QtGui>

class Figura
{
protected:
    int x, y, halflen, dx, dy, r;
    virtual void draw(QPainter *Painter) = 0; // нужна будет в наследуемых классах
public:
    Figura(int X,int Y,int Halflen) :
        x(X), y(Y), halflen(Halflen){} // конструктор
    void move(float Alpha, QPainter *Painter);
};

class MyLine:public Figura
{
protected:
    void draw(QPainter *Painter);
public:
    MyLine(int x, int y, int halflen) :
        Figura(x, y, halflen){} // конструктор
};

class MyRect:public Figura
{
protected:
    void draw(QPainter *Painter);
public:
    MyRect(int x, int y, int halflen) :
        Figura(x, y ,halflen){} // конструктор
};

#endif // FIGURA_H
