/******************************************************************************************
*This game named MineHunter(Version 1.2). Coded by Navca(E-mail:navca@qq.com) and it's    *
*only used for communicating. You are welcomed to send an E-mail to me. There are several *
*bugs maybe, you can right them by yourself freely.                                       *
*                                                             by Navca at Hnu.University  *
*                                                                        February-17-2013 *
*******************************************************************************************/


#include "widget.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QLCDNumber>
#include <QLabel>
#include <QPixmap>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    mainLayout = new QVBoxLayout();
    menuLayout = new QHBoxLayout();

    easy = new QPushButton(QIcon(":/image/easy.png"),"");
    easy->setFlat(true);
    connect(easy,SIGNAL(clicked()),this,SLOT(newEasy()));

    normal = new QPushButton(QIcon(":/image/normal.png"),"");
    normal->setFlat(true);
    connect(normal,SIGNAL(clicked()),this,SLOT(newNormal()));

    difficult = new QPushButton(QIcon(":/image/difficult.png"),"");
    difficult->setFlat(true);
    connect(difficult,SIGNAL(clicked()),this,SLOT(newDifficult()));

    about = new QPushButton(QIcon(":/image/qt.png"),"");
    about->setFlat(true);
    connect(about,SIGNAL(clicked()),this,SLOT(About()));

    label = new QLabel("<h3>Mine Count:");
    lcd = new QLCDNumber(this);
    lcd->setStyleSheet("color:red");

    connect(this,SIGNAL(LCDIn(int)),lcd,SLOT(display(int)));
    connect(this,SIGNAL(LCDDe(int)),lcd,SLOT(display(int)));


    menuLayout->addWidget(easy);
    menuLayout->addWidget(normal);
    menuLayout->addWidget(difficult);
    menuLayout->addStretch(Qt::Horizontal);
    menuLayout->addWidget(label);
    menuLayout->addWidget(lcd);
    menuLayout->addStretch(Qt::Horizontal);

    label2 = new QLabel("<h3>Time:");
    menuLayout->addWidget(label2);
    time = new QLCDNumber(this);
    time->setStyleSheet("color:red");

    timer = new QTimer(this);
    timer->start(1000);

    menuLayout->addWidget(time);
    unit = new QLabel("<h3>S");
    menuLayout->addWidget(unit);

    menuLayout->addStretch(Qt::Horizontal);
    record = new QPushButton(QIcon(":/image/rank.png"),"");
    record->setFlat(true);
    connect(record,SIGNAL(clicked()),this,SLOT(recordShow()));
    recordDlg = new Record();    //..........................................
    menuLayout->addWidget(record);
    menuLayout->addWidget(about);

    mainLayout->addLayout(menuLayout);
    mainLayout->addStretch(Qt::Vertical);

    mineAreaLayout = new QGridLayout();
    mainLayout->addLayout(mineAreaLayout);
    this->setLayout(mainLayout);

    row = 10;
    column = 20;
    mineCount = 30;
    markedCount = mineCount;

    returnRecor = recordDlg->returnRecord(mineCount);

    Initialize();

    this->setFixedSize(600,350);
}

Widget::~Widget()
{
    delete recordDlg;  //

    base.clear();
    mine.clear();
    delete tempBlock;
}

void Widget::Initialize()
{

    lcd->display(markedCount);

    for(int i=0 ; i<row*column ; i++)
    {
        tempBlock = new block(i);
        base.append(tempBlock);

        connect(tempBlock,SIGNAL(expand(int)),this,SLOT(Expand(int)));
        connect(tempBlock,SIGNAL(testWin()),this,SLOT(TestWin()));
        connect(tempBlock,SIGNAL(lost()),this,SLOT(Lost()));

        connect(tempBlock,SIGNAL(markIncrease()),this,SLOT(LcdIncrease()));
        connect(tempBlock,SIGNAL(markDecrease()),this,SLOT(LcdDecrease()));
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            mineAreaLayout->addWidget(base[i*column+j],i,j,1,1);
        }
    }

    QTime time = QTime::currentTime();
    time = QTime::currentTime();
    qsrand(time.second());
    int temp = 0;
    for(int i=0; i<mineCount ; i++)
    {
        temp = qrand()%(row*column);
        if(!base[temp]->isMine())
        {
            base[temp]->setMine();
            mine.append(base[temp]);
        }
        else
        {
            i--;
            continue;
        }

        foreach(tempBlock,Around(base[temp]))
        {
            tempBlock->numIncrease();
        }
    }

    QTime timeStart = QTime::currentTime();
    Start = timeStart.minute()*60+timeStart.second();
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
}

void Widget::timerUpdate()
{
    QTime timeEnd = QTime::currentTime();
    End = timeEnd.minute()*60+timeEnd.second()-Start;
    time->display(End);
}


void Widget::newEasy()
{


    for(int i=0;i<row*column;i++)
        delete base[i];
    base.clear();
    //for(int j=0;j<mine.count(); j++)
    //    delete mine[j];
    mine.clear();

    row = 10;
    column = 20;
    mineCount = 30;
    markedCount = mineCount;

    returnRecor = recordDlg->returnRecord(mineCount);

    Initialize();

    this->setFixedSize(600,350);
}


void Widget::newNormal()
{
    for(int i=0;i<row*column;i++)
        delete base[i];
    base.clear();
    //for(int j=0;j<mine.count(); j++)
    //    delete mine[j];
    mine.clear();

    row = 15;
    column = 25;
    mineCount = 70;
    markedCount = mineCount;

    returnRecor = recordDlg->returnRecord(mineCount);

    Initialize();

    this->setFixedSize(750,500);
}


void Widget::newDifficult()
{
    for(int i=0;i<row*column;i++)
        delete base[i];
    base.clear();

    //for(int j=0;j<mine.count(); j++)
    //    delete mine[j];
    mine.clear();

    row = 20;
    column = 30;
    mineCount = 120;
    markedCount = mineCount;

    returnRecor = recordDlg->returnRecord(mineCount);

    Initialize();

    this->setFixedSize(900,650);

}

void Widget::About()
{
    QMessageBox about(QMessageBox::NoIcon,"About MineHunter","\n\t  MineHunter(Version 1.2) \n\n    Coded by Navca(E-mail:navca@qq.com) and it's only used for communicating. You are welcomed to send an E-mail to me. There are several bugs maybe, you can right them by yourself freely.\n\t\t   by Navca at HNU.University \n\t\t\t      February-17-2013 ");
    about.setIconPixmap(QPixmap(":/image/about.png"));
    about.setWindowIcon(QIcon(":/image/icon.png"));
    about.exec();
}


//此函数用于自动拓展：递归调用
void Widget::Expand(int x)
{
    if(!base[x]->isMine()&&base[x]->isEnabled())
    {
        base[x]->sweep();

        if(base[x]->isNum()==0)
        {
            foreach(tempBlock,Around(base[x]))
            {
                if(tempBlock->isNum()==0)
                    Expand(tempBlock->index());
                else
                    tempBlock->sweep();
            }
        }
        if(base[x]->isNum()!=0)
        {
            foreach(tempBlock,Around(base[x]))
            {
                if(tempBlock->isNum()==0)
                    Expand(tempBlock->index());
            }
        }
    }
}

//此函数返回blo周围的不定个数的block的指针的vector
QVector<block *> Widget::Around(block * blo)
{
    int x = blo->index();
    QVector<block *> around;

    if(x < column)     //UP
    {
        if(x == 0)
        {
            around.append(base[x+1]);
            around.append(base[x+column]);
            around.append(base[x+column+1]);
            return around;
        }
        else if(x == column-1)
        {
            around.append(base[x-1]);
            around.append(base[x+column]);
            around.append(base[x+column-1]);
            return around;
        }
        else
        {
            around.append(base[x+1]);
            around.append(base[x-1]);
            around.append(base[x+column]);
            around.append(base[x+column+1]);
            around.append(base[x+column-1]);
            return around;
        }
    }else if(x >= (row-1)*column)  //DOWN
    {
        if(x == (row-1)*column)
        {
            around.append(base[x-column]);
            around.append(base[x+1]);
            around.append(base[x-column+1]);
            return around;
        }
        else if (x == row * column -1)
        {
            around.append(base[x-1]);
            around.append(base[x-column]);
            around.append(base[x-column-1]);
            return around;
        }
        else
        {
            around.append(base[x+1]);
            around.append(base[x-1]);
            around.append(base[x-column]);
            around.append(base[x-column+1]);
            around.append(base[x-column-1]);
            return around;
        }

    }else if(x % column == 0 )   //LEFT except CONNER
    {
        around.append(base[x-column]);
        around.append(base[x-column+1]);
        around.append(base[x+1]);
        around.append(base[x+column+1]);
        around.append(base[x+column]);
        return around;
    }else if(x % column == column -1 )   //RIGHT except CONNER
    {
        around.append(base[x-column]);
        around.append(base[x-column-1]);
        around.append(base[x-1]);
        around.append(base[x+column-1]);
        around.append(base[x+column]);
        return around;
    }else                              // CENTER
    {
        around.append(base[x-column]);
        around.append(base[x-column+1]);
        around.append(base[x+1]);
        around.append(base[x+column+1]);
        around.append(base[x+column]);
        around.append(base[x-column-1]);
        around.append(base[x-1]);
        around.append(base[x+column-1]);
        return around;
    }
}

void Widget::TestWin()
{
    win=true;

    for(int i=0;i<row*column;i++)   //若不是雷的都被翻开，则获胜
    {
        if(base[i]->isEnabled()&& !base[i]->isMine())
        {
            win=false;
            break;
        }
    }

    if(!win)    //若并没有全部翻开，但是凡是雷的都已经被标记，则也获胜
    {
        win=true;
        for(int i=0;i<base.count();i++)
        {
            if( base[i]->isEnabled() && ( (!base[i]->isMine()&&base[i]->isMarked()) || (base[i]->isMine() && !base[i]->isMarked()) ) )
            {
                win=false;
                break;
            }
        }
    }

    if(win)  //一旦获胜，就弹出对话框提示是否继续
    {
        timer->disconnect(this); //取消定时器连接，停止时间更新

        //此处需添加去除鼠标事件的功能————游戏已获胜，不得对未翻开的block继续点击
        //
        //
        if(End<returnRecor)    //break the record:
        {
            recordDlg->change(true);
            recordDlg->setNum(End);
            recordDlg->show();
        }else
        {
            QMessageBox::StandardButton rb = QMessageBox::information(this,"You Won...","You Won the game...\nPlay again?",QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes);

            if(rb==QMessageBox::Yes)
            {
                if(mineCount==30)
                    this->newEasy();
                else if(mineCount==70)
                    this->newNormal();
                else
                    this->newDifficult();
            }
        }
    }
}

void Widget::Lost()  //一旦失败，就弹出对话框提示是否继续
{
    timer->disconnect(this);

    foreach(tempBlock,mine)
    {
        if(tempBlock->icon().isNull())
            tempBlock->setIcon(QIcon(":/image/mine.png"));
    }

    //此处需添加去除鼠标事件的功能————游戏已失败，不得对未翻开的block继续点击
    //
    //

    QMessageBox::StandardButton rb =  QMessageBox::information(this,"You Lost...","You Lost the game...\nTry again?",QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes);

    if(rb==QMessageBox::Yes)
    {
        if(mineCount==30)
            this->newEasy();
        else if(mineCount==70)
            this->newNormal();
        else
            this->newDifficult();
    }
}


void Widget::recordShow()
{
    recordDlg->change(false);
    recordDlg->show();
}

