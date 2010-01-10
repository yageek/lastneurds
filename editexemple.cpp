#include "editexemple.h"

EditExemple::EditExemple(int index,Truth exemple,QWidget *parent) :
    QWidget(parent){
    setupUi(this);
    this->entriesTable->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
this->entriesTable->horizontalHeader()->setStretchLastSection(true);

//on recrée la table
this->outputValue->setValue((float) exemple.getOutput());
this->entriesTable->setRowCount(exemple.getEntries().size());
for (unsigned int i =0; i < exemple.getEntries().size();i++){

    this->entriesTable->setItem(i,0,new QTableWidgetItem(QString::number(exemple.getEntries().at(i))));

}
this->index = index;
}
void EditExemple::changeEvent(QEvent *e)
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

void EditExemple::sendTruth(){

vector<float> Entries;
float output = this->outputValue->value();
for (int i = 0; i < this->NbrEntries;i++){
    Entries.push_back(this->entriesTable->item(i,0)->text().toFloat());

}
Truth truth(Entries,output);
emit EditedTruth(truth);
this->close();
}
