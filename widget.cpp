#include "widget.h"
#include <QVBoxLayout>

Widget::Widget()
{
    //setupUi(this);
    //codec = QTextCodec::codecForName("Windows-1251");
    this->setWindowTitle("Обработка событий"); // Задаем название окна

    // создаем объекты
    area = new Area(this);
    btn = new QPushButton("Завершить", this );

    // подгоняем в лейаут
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(area);
    layout->addWidget(btn);

    // коннектим кнопку закрытия программы
    connect(btn,
            SIGNAL(clicked(bool)), this, SLOT(close()));
}

Widget::~Widget()
{
    delete area;
    delete btn;
}

