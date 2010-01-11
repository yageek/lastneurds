#include "feedingtool.h"
#include "addexemple.h"
#include <iostream>
#include "errorview.h"
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
float error =0;
QVector<double> errors;
int iterations = this->iteration->value();
//On crée un tableau de perceptron
vector<Neurone*> *perceptron = new vector<Neurone*>();
Neurone * temp;
//Neurone de sortie
Neurone * output = new Neurone();
output->setHidden(false);
output->setSeuilDerivatedFunction(DerivatedTangenteH);
output->setSeuilFunction(TangenteH);
output->setW_0(0.5);
//Net de sortie
Net *net_output = new Net();
net_output->Link(output,NULL);
Net *net_temp;
//iterations

for(unsigned int i = 0; i < this->NbrNeurons;i++){
    temp = new Neurone();
    temp->setSeuilFunction(TangenteH);
    temp->setSeuilDerivatedFunction(DerivatedTangenteH);
    temp->setW_0(0.5);
    perceptron->push_back(temp);
    //On connecte chaque neurone au neurone de fin
    net_temp = new Net;
    net_temp->setWeight(hasard(-1,1));
    net_temp->Link(temp,output);
    }

//On crée les entrées et on les connectes aux neurones
for (unsigned int i = 0; i < this->NbrEntries;i++){
net_temp = new Net;
net_temp->setWeight(hasard(-1,1));

    //Connection
for (unsigned int j =0; j < this->NbrNeurons;j++){

    net_temp->Link(NULL,perceptron->at(j));


}

}
this->progressBar->setMinimum(0);
this->progressBar->setMaximum(iterations);

for(unsigned int l = 0;l < iterations;l++){
//Boucle qui parcours les exemples
    error = 0;
for (unsigned int i=0;i < this->tableTruth.size();i++){
    //On met toutes les valeurs des connexions en entrées
    for(unsigned int j =0; j < this->NbrNeurons;j++){

        perceptron->at(j)->setupTruth(this->tableTruth.at(i));
        float S = perceptron->at(j)->OutputWithCurrentNet();
        perceptron->at(j)->UpdateNetOutput(S);


    }//-->fin de mise des valeurs et de la diffusion

    float temp = output->OutputWithCurrentNet();
    output->UpdateNetOutput(temp);

float learningRate = this->spinLearningrate->value();
output->LearnGradient(this->tableTruth.at(i).getOutput(),learningRate);

//on appelle pour chacun des neurones

for (unsigned int k = 0;k< this->NbrNeurons;k++){
    perceptron->at(k)->LearnGradient(this->tableTruth.at(i).getOutput(),learningRate);

}

//fin pour un exemple
float ycalc = output->OutputWithCurrentNet();
float ydes = this->tableTruth.at(i).getOutput();
error+=0.5*(ydes-ycalc)*(ydes-ycalc);

}

//std::cout << error << std::endl;
errors.push_back(error);
this->progressBar->setValue(l);
}
this->progressBar->reset();
ErrorView *view = new ErrorView(errors);
view->setVisible(true);
}



