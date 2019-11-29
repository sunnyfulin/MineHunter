/******************************************************************************************
*This game named MineHunter(Version 1.2). Coded by Navca(E-mail:navca@qq.com) and it's    *
*only used for communicating. You are welcomed to send an E-mail to me. There are several *
*bugs maybe, you can right them by yourself freely.                                       *
*                                                             by Navca at Hnu.University  *
*                                                                        February-17-2013 *
*******************************************************************************************/


#include <QApplication>
#include "widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget w;
    w.setWindowIcon(QIcon(":/image/icon.png"));
    w.setWindowTitle("MineHunter");
    w.show();

    return a.exec();
}
