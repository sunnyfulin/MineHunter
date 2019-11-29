/******************************************************************************************
*This game named MineHunter(Version 1.2). Coded by Navca(E-mail:navca@qq.com) and it's    *
*only used for communicating. You are welcomed to send an E-mail to me. There are several *
*bugs maybe, you can right them by yourself freely.                                       *
*                                                             by Navca at Hnu.University  *
*                                                                        February-17-2013 *
*******************************************************************************************/


#ifndef WIDGET_H
#define WIDGET_H

#include "block.h"
#include "record.h"

#include <QWidget>
#include <QVector>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QLCDNumber;
class QLabel;
class QTimer;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

    QVector<block *> Around(block *);
    void Initialize();

public slots:
    void Expand(int);    //用于自动展开周围的block
    void TestWin();  //测试是否获胜
    void Lost();   //触发游戏失败

    void newEasy();   //新建简单难度游戏
    void newNormal();  //新建中等难度游戏
    void newDifficult();  //新建困难难度游戏

    void About();   //关于按钮的效果

    void LcdIncrease(){emit LCDIn(--markedCount);}
    void LcdDecrease(){emit LCDDe(++markedCount);}

    void timerUpdate();

    void recordShow();

signals:
    void LCDIn(int);
    void LCDDe(int);

private:
    QVector<block *> base;  //保存所有block的指针
    block * tempBlock;      //构建雷区时使用的临时指针
    QVector<block *> mine;  //保存所有为雷的block的指针

    QVBoxLayout *mainLayout;
    QHBoxLayout *menuLayout;
    QGridLayout *mineAreaLayout;

    QPushButton * easy;     //简单按钮
    QPushButton * normal;   //中等按钮
    QPushButton * difficult;  //困难按钮
    QPushButton * record;
    Record * recordDlg;
    QPushButton * about;  //关于按钮
    QLCDNumber * lcd;   //lcd雷数指示器
    QLabel * label;
    QLabel * label2;
    QLCDNumber * time;
    QLabel * unit;
    QTimer * timer;
    int Start;
    int End;

    int returnRecor;

    int markedCount;  //未被标记的雷数
    int row;
    int column;
    int mineCount;   //雷数
    bool win;   //是否获胜
};

#endif // WIDGET_H
