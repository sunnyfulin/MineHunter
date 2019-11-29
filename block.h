/******************************************************************************************
*This game named MineHunter(Version 1.2). Coded by Navca(E-mail:navca@qq.com) and it's    *
*only used for communicating. You are welcomed to send an E-mail to me. There are several *
*bugs maybe, you can right them by yourself freely.                                       *
*                                                             by Navca at Hnu.University  *
*                                                                        February-17-2013 *
*******************************************************************************************/

#ifndef BLOCK_H
#define BLOCK_H

#include <QPushButton>
#include <QMouseEvent>

class block : public QPushButton
{
    Q_OBJECT
public:
    explicit block(int i,QWidget *parent = 0);

    void sweep();         //显示当前block
    bool isMine(){ return num==9?true:false; }
    void setMine(){ num = 9; }
    void numIncrease(){ if(num!=9) num++; }
    int index(){return id;}
    int isNum(){return num;}
    bool isMarked(){ return marked ;}

protected:
    void mousePressEvent(QMouseEvent *e);   //重定义鼠标事件，左键翻开block，右键标记(或取消已标记)block

signals:
    void expand(int);  //对当前block周围进行拓展的信号
    void testWin();  //测试是否获胜信号
    void lost();   //游戏失败信号

    void markIncrease(); //标记数目增加
    void markDecrease(); //标记数目减少

private:
    int num;  //若num为9则为雷，为0~8表示周围block的雷数
    bool marked;  //当前block是否被标记
    int id;   //当前block在雷区中的位置(范围是从左上角0到右下角的row*column)
};

#endif // BLOCK_H
