#include "networkmanager.h"
#include "setupnewnetwork.h"
#include "learningtool.h"
#include <iostream>
#include<QMessageBox>
#include "feedingtool.h"
NetWorkManager::NetWorkManager(QWidget *parent) :
    QWidget(parent){
    setupUi(this);

    //On met en forme le tout
QHeaderView * header = this->networkTable->horizontalHeader();
QStringList list ;
list << tr("Name") << tr("Neuron") << tr("Entries") << tr("Threshold") << tr("Feed file");
this->networkTable->setHorizontalHeaderLabels(list);
header->setResizeMode(QHeaderView::Stretch);
header->setStretchLastSection(true);

this->networkTable->setSelectionBehavior(QAbstractItemView::SelectRows);
this->networkTable->setSelectionMode(QAbstractItemView::SingleSelection);
this->networkTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

void NetWorkManager::changeEvent(QEvent *e)
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

void NetWorkManager::SubNetWork(){
    int index = this->networkTable->currentRow();
    if(index > -1){
    this->networkTable->removeRow(index);


    }
}

void NetWorkManager::AddNetWork(){
SetupNewNetwork *setup = new SetupNewNetwork();
setup->setVisible(true);

connect(setup,SIGNAL(signalNewNetwork(int,int,int,QString)),this,SLOT(InsertRow(int,int,int,QString)));


}

void NetWorkManager::InsertRow(int NbrNeurons,int NbrEntries,int Index, QString name){
    int currentRow = this->networkTable->rowCount();
this->networkTable->insertRow(currentRow);//on ajoute une nouvelle ligne
this->networkTable->setItem(currentRow,0,new QTableWidgetItem(name));
this->networkTable->setItem(currentRow,1,new QTableWidgetItem(QString::number(NbrNeurons)));
this->networkTable->setItem(currentRow,2,new QTableWidgetItem(QString::number(NbrEntries)));

//Function de seuil
QString *label;

switch(Index){
    case 0 :label = new QString("Hyperbolic tangent");break;
    case 1 :label = new QString("Heavside");break;
    case 2 :label = new QString("Sigmoïde");break;


}
this->networkTable->setItem(currentRow,3,new QTableWidgetItem(*label));
delete label;

}
void NetWorkManager::LaunchLearningTool(){
int currentRow = this->networkTable->currentRow();

if(currentRow > -1){

int NbrNeurons = this->networkTable->item(currentRow,1)->text().toInt();
int NbrEntries = this->networkTable->item(currentRow,2)->text().toInt();
QString name = this->networkTable->item(currentRow,0)->text();
QString Threshold = this->networkTable->item(currentRow,3)->text();

LearningTool * learn = new LearningTool(NbrNeurons,NbrEntries,Threshold,name);
learn->setVisible(true);
} else {
   QMessageBox msgBox;
 msgBox.setText("You have to create and select one network at least.");
 msgBox.exec();
}
}
void NetWorkManager::LaunchFeedingTool(){

int currentRow = this->networkTable->currentRow();

if(currentRow > -1){

int NbrNeurons = this->networkTable->item(currentRow,1)->text().toInt();
int NbrEntries = this->networkTable->item(currentRow,2)->text().toInt();
QString name = this->networkTable->item(currentRow,0)->text();
QString Threshold = this->networkTable->item(currentRow,3)->text();

FeedingTool * learn = new FeedingTool(NbrNeurons,NbrEntries,Threshold,name);
learn->setVisible(true);
} else {
   QMessageBox msgBox;
 msgBox.setText("You have to create and select one network at least.");
 msgBox.exec();
}
}
