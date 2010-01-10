#include "feedingtool.h"

FeedingTool::FeedingTool(QWidget *parent) :
    QWidget(parent){
    setupUi(this);
}
FeedingTool::FeedingTool(int NbrNeurons,int NbrEntries ,QString Threshold,QString name,QWidget * parent) : QWidget(parent){
setupUi(this);
    this->NbrEntries = NbrEntries;
this->NbrNeurons = NbrNeurons;
this->Threshold = Threshold;
this->name = name;

QHeaderView * header = this->truthTable->horizontalHeader();
QStringList list ;
list << "Index" << "Name";
this->truthTable->setHorizontalHeaderLabels(list);
header->setResizeMode(QHeaderView::Stretch);
header->setStretchLastSection(true);

this->truthTable->setSelectionBehavior(QAbstractItemView::SelectRows);
this->truthTable->setSelectionMode(QAbstractItemView::SingleSelection);
this->truthTable->setEditTriggers(QAbstractItemView::NoEditTriggers);



}
void FeedingTool::changeEvent(QEvent *e)
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
