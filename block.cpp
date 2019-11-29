/******************************************************************************************
*This game named MineHunter(Version 1.2). Coded by Navca(E-mail:navca@qq.com) and it's    *
*only used for communicating. You are welcomed to send an E-mail to me. There are several *
*bugs maybe, you can right them by yourself freely.                                       *
*                                                             by Navca at Hnu.University  *
*                                                                        February-17-2013 *
*******************************************************************************************/


#include "block.h"

#include <QString>
#include <QStyle>
#include <QIcon>

block::block(int i, QWidget *parent):
    QPushButton(parent)
{
    id = i;
    num=0;
    marked = false;

    setFixedSize(25,25);
    setCheckable(true);
}


void block::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton && !marked)
    {
        if(num==9)
        {
            setIcon(QIcon(":/image/boom.png"));
            emit lost();
        }
        else
        {
            emit expand(id);
        }
    }

    if(e->button() == Qt::RightButton)
    {
        if(marked)
        {
            marked = false;
            setIconSize(QSize(0,0));
            emit markDecrease();
        }
        else
        {
            marked = true;
            setIcon(QIcon(":/image/flag.png"));
            setIconSize(QSize(15,15));
            emit markIncrease();
            emit testWin();
        }
    }
}


void block::sweep()
{
    if(!marked && this->isEnabled())
    {
        setDisabled(true);
        switch(num)
        {
            case 0 : break;
            case 1 : setText(QString::number(num)); setStyleSheet("color:green;font:12pt"); emit testWin();break;
            case 2 : setText(QString::number(num)); setStyleSheet("color:orange;font:12pt"); emit testWin();break;
            case 3 : setText(QString::number(num)); setStyleSheet("color:blue;font:12pt"); emit testWin();break;
            case 4 : setText(QString::number(num)); setStyleSheet("color:red;font:12pt"); emit testWin();break;
            case 5 : setText(QString::number(num)); setStyleSheet("color:red;font:12pt"); emit testWin();break;
            case 6 : setText(QString::number(num)); setStyleSheet("color:red;font:12pt"); emit testWin();break;
            case 7 : setText(QString::number(num)); setStyleSheet("color:red;font:12pt"); emit testWin();break;
            default : setText(QString::number(num)); setStyleSheet("color:red;font:12pt"); emit testWin();break;
        }
    }
}




















