/********************************************************************************
** Form generated from reading ui file 'errorview.ui'
**
** Created: Mon Jan 11 13:50:18 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ERRORVIEW_H
#define UI_ERRORVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_ErrorView
{
public:
    QVBoxLayout *verticalLayout;
    QwtPlot *qwtPlot;
    QPushButton *pushButton;

    void setupUi(QWidget *ErrorView)
    {
        if (ErrorView->objectName().isEmpty())
            ErrorView->setObjectName(QString::fromUtf8("ErrorView"));
        ErrorView->setWindowModality(Qt::WindowModal);
        ErrorView->resize(400, 300);
        verticalLayout = new QVBoxLayout(ErrorView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qwtPlot = new QwtPlot(ErrorView);
        qwtPlot->setObjectName(QString::fromUtf8("qwtPlot"));

        verticalLayout->addWidget(qwtPlot);

        pushButton = new QPushButton(ErrorView);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(ErrorView);

        QMetaObject::connectSlotsByName(ErrorView);
    } // setupUi

    void retranslateUi(QWidget *ErrorView)
    {
        ErrorView->setWindowTitle(QApplication::translate("ErrorView", "Error Evolution", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("ErrorView", "Teste", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ErrorView);
    } // retranslateUi

};

namespace Ui {
    class ErrorView: public Ui_ErrorView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORVIEW_H
