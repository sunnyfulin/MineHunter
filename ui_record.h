/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Record
{
public:
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *okButton2;
    QSpacerItem *horizontalSpacer_5;
    QWidget *page2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *levelLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *okButton1;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *Record)
    {
        if (Record->objectName().isEmpty())
            Record->setObjectName(QStringLiteral("Record"));
        Record->setEnabled(true);
        Record->resize(190, 256);
        Record->setMinimumSize(QSize(190, 256));
        Record->setMaximumSize(QSize(212, 256));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Record->setWindowIcon(icon);
        Record->setAutoFillBackground(false);
        verticalLayout_3 = new QVBoxLayout(Record);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        stackedWidget = new QStackedWidget(Record);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        verticalLayout_2 = new QVBoxLayout(page1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableWidget = new QTableWidget(page1);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setBackground(QColor(85, 0, 255));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font);
        __qtablewidgetitem1->setBackground(QColor(0, 255, 0));
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font);
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font);
        __qtablewidgetitem3->setBackground(QColor(255, 255, 0));
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font);
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem5->setFont(font);
        __qtablewidgetitem5->setBackground(QColor(255, 0, 0));
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font);
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem7->setBackground(brush);
        tableWidget->setItem(0, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(1, 0, __qtablewidgetitem8);
        QBrush brush1(QColor(255, 255, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem9->setBackground(brush1);
        tableWidget->setItem(2, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(3, 0, __qtablewidgetitem10);
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem11->setBackground(brush2);
        tableWidget->setItem(4, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(5, 0, __qtablewidgetitem12);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setFocusPolicy(Qt::NoFocus);
        tableWidget->setAutoFillBackground(true);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(102);
        tableWidget->horizontalHeader()->setMinimumSectionSize(19);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(27);

        verticalLayout_2->addWidget(tableWidget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        okButton2 = new QPushButton(page1);
        okButton2->setObjectName(QStringLiteral("okButton2"));

        horizontalLayout_6->addWidget(okButton2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        verticalLayout = new QVBoxLayout(page2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        label_5 = new QLabel(page2);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(page2);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        horizontalLayout_4->addWidget(label);

        lcdNumber = new QLCDNumber(page2);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout_4->addWidget(lcdNumber);

        label_6 = new QLabel(page2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        horizontalLayout_4->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(page2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        horizontalLayout_3->addWidget(label_2);

        levelLabel = new QLabel(page2);
        levelLabel->setObjectName(QStringLiteral("levelLabel"));
        levelLabel->setFont(font2);

        horizontalLayout_3->addWidget(levelLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(page2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        horizontalLayout_2->addWidget(label_4);

        lineEdit = new QLineEdit(page2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        okButton1 = new QPushButton(page2);
        okButton1->setObjectName(QStringLiteral("okButton1"));

        horizontalLayout->addWidget(okButton1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(page2);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer_7 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget->addWidget(page2);

        verticalLayout_3->addWidget(stackedWidget);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(okButton2, lineEdit);
        QWidget::setTabOrder(lineEdit, okButton1);
        QWidget::setTabOrder(okButton1, cancelButton);

        retranslateUi(Record);
        QObject::connect(cancelButton, SIGNAL(clicked()), Record, SLOT(close()));
        QObject::connect(okButton2, SIGNAL(clicked()), Record, SLOT(close()));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Record);
    } // setupUi

    void retranslateUi(QWidget *Record)
    {
        Record->setWindowTitle(QApplication::translate("Record", "Record", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Record", "Record", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("Record", "Easy", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("Record", "Time", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("Record", "Normal", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("Record", "Time", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("Record", "Difficult", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("Record", "Time", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 0);
        ___qtablewidgetitem7->setText(QApplication::translate("Record", "Navca1", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("Record", "50s", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(2, 0);
        ___qtablewidgetitem9->setText(QApplication::translate("Record", "Navca2", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(3, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("Record", "60s", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(4, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("Record", "Navca3", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(5, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("Record", "70s", 0));
        tableWidget->setSortingEnabled(__sortingEnabled);

        okButton2->setText(QApplication::translate("Record", "OK", 0));
        label_5->setText(QApplication::translate("Record", "New Record", 0));
        label->setText(QApplication::translate("Record", "Time Used:", 0));
        label_6->setText(QApplication::translate("Record", "S", 0));
        label_2->setText(QApplication::translate("Record", "Your Level:", 0));
        levelLabel->setText(QApplication::translate("Record", "Easy", 0));
        label_4->setText(QApplication::translate("Record", "Your Name:", 0));
        okButton1->setText(QApplication::translate("Record", "OK", 0));
        cancelButton->setText(QApplication::translate("Record", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Record: public Ui_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
