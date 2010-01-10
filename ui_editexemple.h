/********************************************************************************
** Form generated from reading ui file 'editexemple.ui'
**
** Created: Sun Jan 10 17:19:12 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_EDITEXEMPLE_H
#define UI_EDITEXEMPLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditExemple
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *outputValue;
    QTableWidget *entriesTable;
    QPushButton *pushButton;

    void setupUi(QWidget *EditExemple)
    {
        if (EditExemple->objectName().isEmpty())
            EditExemple->setObjectName(QString::fromUtf8("EditExemple"));
        EditExemple->resize(400, 300);
        verticalLayout = new QVBoxLayout(EditExemple);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(EditExemple);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        outputValue = new QDoubleSpinBox(EditExemple);
        outputValue->setObjectName(QString::fromUtf8("outputValue"));

        horizontalLayout->addWidget(outputValue);


        verticalLayout->addLayout(horizontalLayout);

        entriesTable = new QTableWidget(EditExemple);
        if (entriesTable->columnCount() < 1)
            entriesTable->setColumnCount(1);
        entriesTable->setObjectName(QString::fromUtf8("entriesTable"));
        entriesTable->setColumnCount(1);

        verticalLayout->addWidget(entriesTable);

        pushButton = new QPushButton(EditExemple);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(EditExemple);

        QMetaObject::connectSlotsByName(EditExemple);
    } // setupUi

    void retranslateUi(QWidget *EditExemple)
    {
        EditExemple->setWindowTitle(QApplication::translate("EditExemple", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EditExemple", "Output", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("EditExemple", "Apply", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(EditExemple);
    } // retranslateUi

};

namespace Ui {
    class EditExemple: public Ui_EditExemple {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITEXEMPLE_H
