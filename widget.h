#ifndef WIDGET_H
#define WIDGET_H

#include "ui_widget.h"

#include <QWidget>

class Widget : public QWidget, private Ui::Widget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
