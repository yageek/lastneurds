#include "learningtool.h"

LearningTool::LearningTool(QWidget *parent) :
    QWidget(parent){
    setupUi(this);
}

void LearningTool::changeEvent(QEvent *e)
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

LearningTool::LearningTool(int NbrNeurons,int NbrEntries,QString Threshold,QString name,QWidget * parent): QWidget(parent){

setupUi(this);
this->NbrEntries = NbrEntries;
this->NbrNeurons = NbrNeurons;
this->Threshold = Threshold;
this->name = name;

this->setWindowTitle(name);

}
