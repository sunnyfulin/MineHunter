/******************************************************************************************
*This game named MineHunter(Version 1.2). Coded by Navca(E-mail:navca@qq.com) and it's    *
*only used for communicating. You are welcomed to send an E-mail to me. There are several *
*bugs maybe, you can right them by yourself freely.                                       *
*                                                             by Navca at Hnu.University  *
*                                                                        February-17-2013 *
*******************************************************************************************/

#ifndef RECORD_H
#define RECORD_H

#include <QWidget>

#include "ui_record.h"

class QString;

namespace Ui {
class Record;
}

class Record : public QWidget,public Ui::Record
{
    Q_OBJECT

public:
    explicit Record(QWidget *parent = 0);
    ~Record();
    int returnRecord(int i);
    void change(bool);
    void setNum(int);

private slots:
    void on_okButton1_clicked();

private:
    Ui::Record *ui;

    int mark;
    int time;
    QTableWidgetItem *newitem1;
    QTableWidgetItem *newitem2;
    QString recordName;
};

#endif // RECORD_H
