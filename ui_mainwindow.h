/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sun Jan 10 14:15:02 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quitter;
    QAction *actionNetWorkManager;
    QAction *actionChart;
    QAction *actionFeedWizard;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QMenu *menuQuitter;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(629, 209);
        action_Quitter = new QAction(MainWindow);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        actionNetWorkManager = new QAction(MainWindow);
        actionNetWorkManager->setObjectName(QString::fromUtf8("actionNetWorkManager"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/view.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNetWorkManager->setIcon(icon);
        actionChart = new QAction(MainWindow);
        actionChart->setObjectName(QString::fromUtf8("actionChart"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/chart.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChart->setIcon(icon1);
        actionFeedWizard = new QAction(MainWindow);
        actionFeedWizard->setObjectName(QString::fromUtf8("actionFeedWizard"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/wizard.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFeedWizard->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 629, 25));
        menuQuitter = new QMenu(menuBar);
        menuQuitter->setObjectName(QString::fromUtf8("menuQuitter"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuQuitter->menuAction());
        menuQuitter->addAction(action_Quitter);
        mainToolBar->addAction(actionNetWorkManager);
        mainToolBar->addAction(actionFeedWizard);

        retranslateUi(MainWindow);
        QObject::connect(action_Quitter, SIGNAL(activated()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Neurds", 0, QApplication::UnicodeUTF8));
        action_Quitter->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        actionNetWorkManager->setText(QApplication::translate("MainWindow", "NetWorkManager", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNetWorkManager->setToolTip(QApplication::translate("MainWindow", "Launch learning tool", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionChart->setText(QApplication::translate("MainWindow", "Chart", 0, QApplication::UnicodeUTF8));
        actionFeedWizard->setText(QApplication::translate("MainWindow", "FeedWizard", 0, QApplication::UnicodeUTF8));
        menuQuitter->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
