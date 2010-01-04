#include "learningtool.h"
#include "neuroneitem.h"
LearningTool::LearningTool(QWidget *parent) :
    QWidget(parent){
    setupUi(this);
    this->scene = new QGraphicsScene();
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
this->scene = new QGraphicsScene();
this->scene->setSceneRect(0,0,800,1000);
NeuroneItem * item = new NeuroneItem();
this->scene->addItem(item);
item->setPos(0,0);
item = new NeuroneItem();
this->scene->addItem(item);
item->setPos(10,10);
this->perceptron->setScene(this->scene);
}
