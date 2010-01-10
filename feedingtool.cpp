#include "feedingtool.h"
#include "addexemple.h"
#include <iostream>
#include "editexemple.h"
#include "Neurone.h"
#include "Seuil_function.h"
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
list << "List of exemples";
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

void FeedingTool::addTruth(Truth exemple){
this->tableTruth.push_back(exemple);
this->updateTruth();
}
void FeedingTool::subTruth(){

int index = this->truthTable->currentRow();
if(index > -1){
this->tableTruth.erase(this->tableTruth.begin()+index);//efface le tableau logique
this->truthTable->removeRow(index);
}
this->updateTruth();
}

void FeedingTool::updateTruth(){
this->truthTable->setRowCount(this->tableTruth.size());
this->truthTable->clearContents();
for (unsigned int i =0; i < this->tableTruth.size();i++){
this->truthTable->setItem(i,0,new QTableWidgetItem(QString("Exemple : ").append(QString::number(i+1))));

}
}

void FeedingTool::getExemple(){
AddExemple *exemple = new AddExemple(this->NbrEntries);
exemple->setVisible(true);
connect(exemple,SIGNAL(ValidateTruth(Truth)),this,SLOT(addTruth(Truth)));


}

void FeedingTool::editExemple(){
    int index = this->truthTable->currentRow();
    if( index> -1){

    EditExemple *edit = new EditExemple(index,this->tableTruth.at(index));
    edit->setVisible(true);
connect(edit,SIGNAL(EditedTruth(uint,Truth)),this,SLOT(ChangeTruth(unsigned int,Truth)));
    }


}
void FeedingTool::ChangeTruth(unsigned int index,Truth exemple){
this->tableTruth.at(index) = exemple;
this->updateTruth();


}

void FeedingTool::Learning(){

int iterations = this->iteration->value();
//On crée un tableau de perceptron
vector<Neurone*> *perceptron = new vector<Neurone*>();
Neurone * temp;
for(unsigned int i = 0; i < this->NbrNeurons;i++){
    temp = new Neurone();
    temp->setSeuilFunction(TangenteH);
    temp->setSeuilDerivatedFunction(DerivatedTangenteH);
    temp->setW_0(0.5);

}

}
