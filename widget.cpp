#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPen>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
<<<<<<< HEAD
=======
    pixclear();
>>>>>>> 1a16a31 (61*61)
    ui->setupUi(this);
}

void Widget::pixclear()
{
<<<<<<< HEAD
    for(int i=0;i<60;i++)
    {
        for(int j=0;j<60;j++)
        {
            pix[i][j]=0;
        }
=======
    pix.resize(61);
    for(int i=0;i<pix.size();i++)
    {
        pix[i].resize(61);
>>>>>>> 1a16a31 (61*61)
    }
}

void Widget::pixset(int x,int y)
{
    int X=x+30;
    int Y=y+30;
    pix[X][Y]=1;
}

int Widget::pixget(int x,int y)
{
    if(pix[x][y]==1){
        return 1;
    }
    return 0;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //使用画笔，设置画笔的风格
    QPen pen1(Qt::black,2, Qt::SolidLine);
    QPen pen2(Qt::darkGray,1, Qt::SolidLine);
    QPen pen3(Qt::NoPen);
    QBrush bruch(Qt::SolidPattern);//画刷
    bruch.setColor(Qt::green);
<<<<<<< HEAD
    painter.setPen(pen1);
    painter.drawLine(0,300,600,300);
    painter.drawLine(300,0,300,600);
    painter.setPen(pen2);
    for(int i=10;i<=590;i=i+10)
    {
        painter.drawLine(0,i,600,i);
    }
    for(int j=10;j<=590;j=j+10)
    {
        painter.drawLine(j,0,j,600);
    }
    painter.setPen(pen3);
    painter.setBrush(bruch);//设置画刷
    for(int x=0;x<60;x++)
    {
        for(int y=0;y<60;y++)
=======

    painter.setPen(pen3);
    painter.setBrush(bruch);//设置画刷
    for(int x=0;x<=60;x++)
    {
        for(int y=0;y<=60;y++)
>>>>>>> 1a16a31 (61*61)
        {
            if(pixget(x,y)==1){
                int X=x-30;int Y=y-30;
                painter.drawRect(QRect(300+10*X, 300-10*Y, 10, 10));
                update();
            }
        }
    }
<<<<<<< HEAD
=======

    painter.setPen(pen1);
    painter.drawLine(0,306,610,306);
    painter.drawLine(306,0,306,610);

    painter.setPen(pen2);
    for(int i=10;i<=600;i=i+10)
    {
        painter.drawLine(0,i,610,i);
    }
    for(int j=10;j<=600;j=j+10)
    {
        painter.drawLine(j,0,j,610);
    }

>>>>>>> 1a16a31 (61*61)
}

Widget::~Widget()
{
    delete ui;
}
