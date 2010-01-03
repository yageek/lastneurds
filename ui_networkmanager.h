/********************************************************************************
** Form generated from reading ui file 'networkmanager.ui'
**
** Created: Mon Jan 4 00:15:08 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_NETWORKMANAGER_H
#define UI_NETWORKMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetWorkManager
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *addButton;
    QToolButton *subButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *networkTable;

    void setupUi(QWidget *NetWorkManager)
    {
        if (NetWorkManager->objectName().isEmpty())
            NetWorkManager->setObjectName(QString::fromUtf8("NetWorkManager"));
        NetWorkManager->resize(527, 300);
        verticalLayout = new QVBoxLayout(NetWorkManager);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QToolButton(NetWorkManager);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        horizontalLayout->addWidget(addButton);

        subButton = new QToolButton(NetWorkManager);
        subButton->setObjectName(QString::fromUtf8("subButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/sub.png"), QSize(), QIcon::Normal, QIcon::Off);
        subButton->setIcon(icon1);

        horizontalLayout->addWidget(subButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        networkTable = new QTableWidget(NetWorkManager);
        if (networkTable->columnCount() < 4)
            networkTable->setColumnCount(4);
        networkTable->setObjectName(QString::fromUtf8("networkTable"));
        networkTable->setRowCount(0);
        networkTable->setColumnCount(4);

        verticalLayout->addWidget(networkTable);


        retranslateUi(NetWorkManager);
        QObject::connect(addButton, SIGNAL(clicked()), NetWorkManager, SLOT(AddNetWork()));
        QObject::connect(subButton, SIGNAL(clicked()), NetWorkManager, SLOT(SubNetWork()));

        QMetaObject::connectSlotsByName(NetWorkManager);
    } // setupUi

    void retranslateUi(QWidget *NetWorkManager)
    {
        NetWorkManager->setWindowTitle(QApplication::translate("NetWorkManager", "Network Manager", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("NetWorkManager", "...", 0, QApplication::UnicodeUTF8));
        subButton->setText(QApplication::translate("NetWorkManager", "...", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(NetWorkManager);
    } // retranslateUi

};

namespace Ui {
    class NetWorkManager: public Ui_NetWorkManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKMANAGER_H
