/********************************************************************************
** Form generated from reading ui file 'errorview.ui'
**
** Created: Mon Jan 11 15:36:06 2010
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_ErrorView
{
public:
    QHBoxLayout *horizontalLayout;
    QwtPlot *qwtPlot;
    QTableWidget *errorTable;

    void setupUi(QWidget *ErrorView)
    {
        if (ErrorView->objectName().isEmpty())
            ErrorView->setObjectName(QString::fromUtf8("ErrorView"));
        ErrorView->setWindowModality(Qt::WindowModal);
        ErrorView->resize(459, 300);
        horizontalLayout = new QHBoxLayout(ErrorView);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        qwtPlot = new QwtPlot(ErrorView);
        qwtPlot->setObjectName(QString::fromUtf8("qwtPlot"));

        horizontalLayout->addWidget(qwtPlot);

        errorTable = new QTableWidget(ErrorView);
        if (errorTable->columnCount() < 1)
            errorTable->setColumnCount(1);
        errorTable->setObjectName(QString::fromUtf8("errorTable"));
        errorTable->setColumnCount(1);

        horizontalLayout->addWidget(errorTable);


        retranslateUi(ErrorView);

        QMetaObject::connectSlotsByName(ErrorView);
    } // setupUi

    void retranslateUi(QWidget *ErrorView)
    {
        ErrorView->setWindowTitle(QApplication::translate("ErrorView", "Error Evolution", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ErrorView);
    } // retranslateUi

};

namespace Ui {
    class ErrorView: public Ui_ErrorView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORVIEW_H
