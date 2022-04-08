#include "widget.h"
#include <QVBoxLayout>

Widget::Widget()
{
    //setupUi(this);
    //codec = QTextCodec::codecForName("Windows-1251");
    this->setWindowTitle("Обработка событий");
    area = new Area(this);
    btn = new QPushButton("Завершить", this );
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(area);
    layout->addWidget(btn);
    connect(btn,
            SIGNAL(clicked(bool)), this, SLOT(close()));
}

Widget::~Widget()
{
    delete area;
    delete btn;
}

