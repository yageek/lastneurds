#include "networkmanager.h"

NetWorkManager::NetWorkManager(QWidget *parent) :
    QWidget(parent){
    setupUi(this);

    //On met en forme le tout
QHeaderView * header = this->networkTable->horizontalHeader();
QStringList list ;
list << tr("Name") << tr("Neuron") << tr("Entries") << tr("Threshold");
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
}

void NetWorkManager::AddNetWork(){

}
