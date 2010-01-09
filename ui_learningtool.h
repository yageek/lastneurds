/********************************************************************************
** Form generated from reading ui file 'learningtool.ui'
**
** Created: Mon Jan 4 22:50:48 2010
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LearningTool
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *perceptron;
    QHBoxLayout *horizontalLayout;
    QPushButton *browseButton;
    QLineEdit *pathText;
    QPushButton *learnButton;
    QProgressBar *progressBar;

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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        browseButton = new QPushButton(LearningTool);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        horizontalLayout->addWidget(browseButton);

        pathText = new QLineEdit(LearningTool);
        pathText->setObjectName(QString::fromUtf8("pathText"));

        horizontalLayout->addWidget(pathText);

        learnButton = new QPushButton(LearningTool);
        learnButton->setObjectName(QString::fromUtf8("learnButton"));

        horizontalLayout->addWidget(learnButton);


        verticalLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(LearningTool);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        retranslateUi(LearningTool);

        QMetaObject::connectSlotsByName(LearningTool);
    } // setupUi

    void retranslateUi(QWidget *LearningTool)
    {
        LearningTool->setWindowTitle(QApplication::translate("LearningTool", "Learning Tool", 0, QApplication::UnicodeUTF8));
        browseButton->setText(QApplication::translate("LearningTool", "Browse...", 0, QApplication::UnicodeUTF8));
        learnButton->setText(QApplication::translate("LearningTool", "Learn", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(LearningTool);
    } // retranslateUi

};

namespace Ui {
    class LearningTool: public Ui_LearningTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARNINGTOOL_H
