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
    void Expand(int);    //�����Զ�չ����Χ��block
    void TestWin();  //�����Ƿ��ʤ
    void Lost();   //������Ϸʧ��

    void newEasy();   //�½����Ѷ���Ϸ
    void newNormal();  //�½��е��Ѷ���Ϸ
    void newDifficult();  //�½������Ѷ���Ϸ

    void About();   //���ڰ�ť��Ч��

    void LcdIncrease(){emit LCDIn(--markedCount);}
    void LcdDecrease(){emit LCDDe(++markedCount);}

    void timerUpdate();

    void recordShow();

signals:
    void LCDIn(int);
    void LCDDe(int);

private:
    QVector<block *> base;  //��������block��ָ��
    block * tempBlock;      //��������ʱʹ�õ���ʱָ��
    QVector<block *> mine;  //��������Ϊ�׵�block��ָ��

    QVBoxLayout *mainLayout;
    QHBoxLayout *menuLayout;
    QGridLayout *mineAreaLayout;

    QPushButton * easy;     //�򵥰�ť
    QPushButton * normal;   //�еȰ�ť
    QPushButton * difficult;  //���Ѱ�ť
    QPushButton * record;
    Record * recordDlg;
    QPushButton * about;  //���ڰ�ť
    QLCDNumber * lcd;   //lcd����ָʾ��
    QLabel * label;
    QLabel * label2;
    QLCDNumber * time;
    QLabel * unit;
    QTimer * timer;
    int Start;
    int End;

    int returnRecor;

    int markedCount;  //δ����ǵ�����
    int row;
    int column;
    int mineCount;   //����
    bool win;   //�Ƿ��ʤ
};

#endif // WIDGET_H
