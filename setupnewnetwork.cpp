#include "setupnewnetwork.h"
#include<iostream>
#include<QMessageBox>
SetupNewNetwork::SetupNewNetwork(QWidget *parent) :
    QWidget(parent){
    setupUi(this);

this->setFixedSize(300,200);
}

void SetupNewNetwork::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        retranslateUi(this);
        break;
    default:
        break;
    }
}

void SetupNewNetwork::getNewNetwork(){


int NbrNeurons = this->spinNeurons->value();
int NbrEntries = this->spinEntry->value();
int Index = this->spinThreshold->currentIndex();
QString name = this->nameText->text();
if(name.isEmpty()){
     QMessageBox msgBox;
 msgBox.setText("Network name is empty !");
 msgBox.setInformativeText("Correct the corresponding field");
 msgBox.exec();



}else {
emit signalNewNetwork(NbrNeurons,NbrEntries,Index,name);
this->close();}
}
