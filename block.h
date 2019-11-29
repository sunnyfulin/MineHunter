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

    void sweep();         //��ʾ��ǰblock
    bool isMine(){ return num==9?true:false; }
    void setMine(){ num = 9; }
    void numIncrease(){ if(num!=9) num++; }
    int index(){return id;}
    int isNum(){return num;}
    bool isMarked(){ return marked ;}

protected:
    void mousePressEvent(QMouseEvent *e);   //�ض�������¼����������block���Ҽ����(��ȡ���ѱ��)block

signals:
    void expand(int);  //�Ե�ǰblock��Χ������չ���ź�
    void testWin();  //�����Ƿ��ʤ�ź�
    void lost();   //��Ϸʧ���ź�

    void markIncrease(); //�����Ŀ����
    void markDecrease(); //�����Ŀ����

private:
    int num;  //��numΪ9��Ϊ�ף�Ϊ0~8��ʾ��Χblock������
    bool marked;  //��ǰblock�Ƿ񱻱��
    int id;   //��ǰblock�������е�λ��(��Χ�Ǵ����Ͻ�0�����½ǵ�row*column)
};

#endif // BLOCK_H
