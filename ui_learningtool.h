/********************************************************************************
** Form generated from reading ui file 'learningtool.ui'
**
** Created: Sat Jan 9 18:42:09 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_LEARNINGTOOL_H
#define UI_LEARNINGTOOL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LearningTool
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *perceptron;

    void setupUi(QWidget *LearningTool)
    {
        if (LearningTool->objectName().isEmpty())
            LearningTool->setObjectName(QString::fromUtf8("LearningTool"));
        LearningTool->resize(581, 490);
        verticalLayout = new QVBoxLayout(LearningTool);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        perceptron = new QGraphicsView(LearningTool);
        perceptron->setObjectName(QString::fromUtf8("perceptron"));

        verticalLayout->addWidget(perceptron);


        retranslateUi(LearningTool);

        QMetaObject::connectSlotsByName(LearningTool);
    } // setupUi

    void retranslateUi(QWidget *LearningTool)
    {
        LearningTool->setWindowTitle(QApplication::translate("LearningTool", "Learning Tool", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(LearningTool);
    } // retranslateUi

};

namespace Ui {
    class LearningTool: public Ui_LearningTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNINGTOOL_H
