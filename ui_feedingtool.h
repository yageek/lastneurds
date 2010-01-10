/********************************************************************************
** Form generated from reading ui file 'feedingtool.ui'
**
** Created: Sun Jan 10 14:06:29 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FEEDINGTOOL_H
#define UI_FEEDINGTOOL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FeedingTool
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *addButton;
    QToolButton *subButton;
    QLabel *label;
    QSpinBox *iteration;
    QPushButton *learnButton;
    QTableWidget *truthTable;
    QProgressBar *progressBar;

    void setupUi(QWidget *FeedingTool)
    {
        if (FeedingTool->objectName().isEmpty())
            FeedingTool->setObjectName(QString::fromUtf8("FeedingTool"));
        FeedingTool->setWindowModality(Qt::ApplicationModal);
        FeedingTool->resize(400, 300);
        verticalLayout = new QVBoxLayout(FeedingTool);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QToolButton(FeedingTool);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        horizontalLayout->addWidget(addButton);

        subButton = new QToolButton(FeedingTool);
        subButton->setObjectName(QString::fromUtf8("subButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/sub.png"), QSize(), QIcon::Normal, QIcon::Off);
        subButton->setIcon(icon1);

        horizontalLayout->addWidget(subButton);

        label = new QLabel(FeedingTool);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        iteration = new QSpinBox(FeedingTool);
        iteration->setObjectName(QString::fromUtf8("iteration"));
        iteration->setMinimum(1);

        horizontalLayout->addWidget(iteration);

        learnButton = new QPushButton(FeedingTool);
        learnButton->setObjectName(QString::fromUtf8("learnButton"));

        horizontalLayout->addWidget(learnButton);


        verticalLayout->addLayout(horizontalLayout);

        truthTable = new QTableWidget(FeedingTool);
        if (truthTable->columnCount() < 2)
            truthTable->setColumnCount(2);
        truthTable->setObjectName(QString::fromUtf8("truthTable"));
        truthTable->setColumnCount(2);

        verticalLayout->addWidget(truthTable);

        progressBar = new QProgressBar(FeedingTool);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        retranslateUi(FeedingTool);

        QMetaObject::connectSlotsByName(FeedingTool);
    } // setupUi

    void retranslateUi(QWidget *FeedingTool)
    {
        FeedingTool->setWindowTitle(QApplication::translate("FeedingTool", "Feeding Tool", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("FeedingTool", "...", 0, QApplication::UnicodeUTF8));
        subButton->setText(QApplication::translate("FeedingTool", "...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FeedingTool", "Iterations", 0, QApplication::UnicodeUTF8));
        learnButton->setText(QApplication::translate("FeedingTool", "Learning", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(FeedingTool);
    } // retranslateUi

};

namespace Ui {
    class FeedingTool: public Ui_FeedingTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDINGTOOL_H
