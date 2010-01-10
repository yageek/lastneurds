/********************************************************************************
** Form generated from reading ui file 'addexemple.ui'
**
** Created: Sun Jan 10 17:32:12 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ADDEXEMPLE_H
#define UI_ADDEXEMPLE_H

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

class Ui_AddExemple
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *outputValue;
    QTableWidget *entriesTable;
    QPushButton *pushButton;

    void setupUi(QWidget *AddExemple)
    {
        if (AddExemple->objectName().isEmpty())
            AddExemple->setObjectName(QString::fromUtf8("AddExemple"));
        AddExemple->setWindowModality(Qt::WindowModal);
        AddExemple->resize(400, 300);
        verticalLayout = new QVBoxLayout(AddExemple);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(AddExemple);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        outputValue = new QDoubleSpinBox(AddExemple);
        outputValue->setObjectName(QString::fromUtf8("outputValue"));

        horizontalLayout->addWidget(outputValue);


        verticalLayout->addLayout(horizontalLayout);

        entriesTable = new QTableWidget(AddExemple);
        if (entriesTable->columnCount() < 1)
            entriesTable->setColumnCount(1);
        entriesTable->setObjectName(QString::fromUtf8("entriesTable"));
        entriesTable->setColumnCount(1);

        verticalLayout->addWidget(entriesTable);

        pushButton = new QPushButton(AddExemple);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(AddExemple);
        QObject::connect(pushButton, SIGNAL(clicked()), AddExemple, SLOT(sendTruth()));

        QMetaObject::connectSlotsByName(AddExemple);
    } // setupUi

    void retranslateUi(QWidget *AddExemple)
    {
        AddExemple->setWindowTitle(QApplication::translate("AddExemple", "Add Exemple", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddExemple", "Output", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AddExemple", "Ok", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AddExemple);
    } // retranslateUi

};

namespace Ui {
    class AddExemple: public Ui_AddExemple {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXEMPLE_H
