/******************************************************************************************
*This game named MineHunter(Version 1.2). Coded by Navca(E-mail:navca@qq.com) and it's    *
*only used for communicating. You are welcomed to send an E-mail to me. There are several *
*bugs maybe, you can right them by yourself freely.                                       *
*                                                             by Navca at Hnu.University  *
*                                                                        February-17-2013 *
*******************************************************************************************/


#include "record.h"
#include "ui_record.h"

#include <QtGui>
#include <QString>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

Record::Record(QWidget *parent) :QWidget(parent),ui(new Ui::Record)
{
    ui->setupUi(this);

    fstream rrecord("record");
    string word;
    QTableWidgetItem *temp;
    for(int i=0;i<=6;i++)
    {
        rrecord>>word;
        QString strr= QString::fromStdString(word);
        temp = new QTableWidgetItem(strr);
        ui->tableWidget->setItem(i,0,temp);
    }
    rrecord.close();
    delete temp;
}

Record::~Record()
{

    fstream wrecord("record");
    QTableWidgetItem *temp;
    QString tstr;
    string word;
    for(int i = 0; i<6 ; i++)
    {
        temp = ui->tableWidget->item(i,0);
        tstr = temp->text();
        word = tstr.toStdString();
        wrecord<<word<<" ";
    }
    wrecord.close();

    delete ui;
}


void Record::on_okButton1_clicked()
{

    recordName = ui->lineEdit->text();
    ui->stackedWidget->setCurrentIndex(0);
    newitem1 = new QTableWidgetItem(recordName);
    QTableWidgetItem * temp = new QTableWidgetItem(QString::number(time));

    if(mark==30)
    {
        ui->tableWidget->setItem(0,0,newitem1);
        ui->tableWidget->setItem(1,0,temp);
    }else if(mark==70)
    {
        ui->tableWidget->setItem(2,0,newitem1);
        ui->tableWidget->setItem(3,0,temp);
    }else{
        ui->tableWidget->setItem(4,0,newitem1);
        ui->tableWidget->setItem(5,0,temp);
    }
}

int Record::returnRecord(int min)
{
    mark = min;

    QTableWidgetItem *temp;
    if(min==30)
    {
        temp = ui->tableWidget->item(1,0);
    }else if(min==70)
    {
        temp = ui->tableWidget->item(3,0);
    }else
    {
        temp = ui->tableWidget->item(5,0);
    }
    QString st = temp->text();
    int x = st.toInt(0,10);
    return x;
}

void Record::change(bool b)
{
    b?(ui->stackedWidget->setCurrentIndex(1)):(ui->stackedWidget->setCurrentIndex(0));
}

void Record::setNum(int end)
{
    time = end;
    ui->lcdNumber->display(end);
}



