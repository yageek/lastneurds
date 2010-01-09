/********************************************************************************
** Form generated from reading ui file 'setupnewnetwork.ui'
**
** Created: Sat Jan 9 17:16:12 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SETUPNEWNETWORK_H
#define UI_SETUPNEWNETWORK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetupNewNetwork
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinNeurons;
    QLabel *label_2;
    QSpinBox *spinEntry;
    QLabel *label_3;
    QComboBox *spinThreshold;
    QLabel *label_4;
    QLineEdit *nameText;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *SetupNewNetwork)
    {
        if (SetupNewNetwork->objectName().isEmpty())
            SetupNewNetwork->setObjectName(QString::fromUtf8("SetupNewNetwork"));
        SetupNewNetwork->setWindowModality(Qt::ApplicationModal);
        SetupNewNetwork->resize(402, 195);
        verticalLayout = new QVBoxLayout(SetupNewNetwork);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(SetupNewNetwork);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinNeurons = new QSpinBox(SetupNewNetwork);
        spinNeurons->setObjectName(QString::fromUtf8("spinNeurons"));
        spinNeurons->setMinimum(1);
        spinNeurons->setMaximum(1024);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinNeurons);

        label_2 = new QLabel(SetupNewNetwork);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spinEntry = new QSpinBox(SetupNewNetwork);
        spinEntry->setObjectName(QString::fromUtf8("spinEntry"));
        spinEntry->setMinimum(2);
        spinEntry->setMaximum(1024);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinEntry);

        label_3 = new QLabel(SetupNewNetwork);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        spinThreshold = new QComboBox(SetupNewNetwork);
        spinThreshold->setObjectName(QString::fromUtf8("spinThreshold"));

        formLayout->setWidget(2, QFormLayout::FieldRole, spinThreshold);

        label_4 = new QLabel(SetupNewNetwork);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        nameText = new QLineEdit(SetupNewNetwork);
        nameText->setObjectName(QString::fromUtf8("nameText"));

        formLayout->setWidget(3, QFormLayout::FieldRole, nameText);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(SetupNewNetwork);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout->addWidget(addButton);

        cancelButton = new QPushButton(SetupNewNetwork);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SetupNewNetwork);
        QObject::connect(addButton, SIGNAL(clicked()), SetupNewNetwork, SLOT(getNewNetwork()));
        QObject::connect(cancelButton, SIGNAL(clicked()), SetupNewNetwork, SLOT(close()));

        QMetaObject::connectSlotsByName(SetupNewNetwork);
    } // setupUi

    void retranslateUi(QWidget *SetupNewNetwork)
    {
        SetupNewNetwork->setWindowTitle(QApplication::translate("SetupNewNetwork", "Add new network", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SetupNewNetwork", "Neurons number", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SetupNewNetwork", "Neurones entry", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SetupNewNetwork", "Threshol function", 0, QApplication::UnicodeUTF8));
        spinThreshold->clear();
        spinThreshold->insertItems(0, QStringList()
         << QApplication::translate("SetupNewNetwork", "Hyperbolic tangent", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SetupNewNetwork", "Heavside", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SetupNewNetwork", "Sigmo\303\257de", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("SetupNewNetwork", "Name", 0, QApplication::UnicodeUTF8));
        nameText->setText(QApplication::translate("SetupNewNetwork", "default", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("SetupNewNetwork", "Add", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("SetupNewNetwork", "Cancel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SetupNewNetwork);
    } // retranslateUi

};

namespace Ui {
    class SetupNewNetwork: public Ui_SetupNewNetwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPNEWNETWORK_H
