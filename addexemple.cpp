#include "addexemple.h"
#include "Truth.h"

AddExemple::AddExemple(int NbrEntries,QWidget *parent) :
    QWidget(parent){
    setupUi(this);
    this->NbrEntries = NbrEntries;
//on ajuste les entrées
    for (int i = 0; i < NbrEntries;i++){
    this->entriesTable->insertRow(i);
    this->entriesTable->setItem(i,0,new QTableWidgetItem("0"));

    }
this->entriesTable->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
this->entriesTable->horizontalHeader()->setStretchLastSection(true);
}

void AddExemple::changeEvent(QEvent *e)
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
void AddExemple::sendTruth(){

vector<float> Entries;
float output = this->outputValue->value();
for (int i = 0; i < this->NbrEntries;i++){
    Entries.push_back(this->entriesTable->item(i,0)->text().toFloat());

}
Truth truth(Entries,output);
emit ValidateTruth(truth);
this->close();
}
