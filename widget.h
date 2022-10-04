#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <vector>
using namespace std;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    //绘图事件
    void paintEvent(QPaintEvent *);
    void pixclear();
    void pixset(int,int);
    int pixget(int,int);

private:
    Ui::Widget *ui;
    QVector<QVector<int>> pix;
};


#endif // WIDGET_H
