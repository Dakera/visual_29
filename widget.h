#ifndef WIDGET_H
#define WIDGET_H

#include "ui_widget.h"

#include "area.h"
#include <QPushButton>

class Widget : public QWidget, private Ui::Widget
{
    Q_OBJECT
protected:
    //QTextCodec *codec;
    Area * area; // область отображения рисунка
    QPushButton * btn;
public:
    Widget();
    ~Widget();
};
#endif // WIDGET_H
