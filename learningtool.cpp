#include "learningtool.h"
#include "neuroneitem.h"
#include "entryitem.h"
#include <algorithm>
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

//


//

//on calcule la hauteur de la scene
int largeur = 600;
int hauteur = std::max(NbrEntries,NbrNeurons)*40;
int yMin = (hauteur - std::min(NbrEntries,NbrNeurons)*40)/2;
int yNeurons;
int yEntries;
int xNeurons = largeur - 100;
int xEntry = 50;
if(std::max(NbrEntries,NbrNeurons) == NbrNeurons) {
    yEntries = yMin + 60;
    yNeurons = 60;

} else {
    yNeurons = yMin + 60;
    yEntries = 60;
}
this->setWindowTitle(QString("Viewing : ").append(name));
this->setFixedSize(700,500);
this->scene = new QGraphicsScene();
this->scene->setSceneRect(0,0,largeur,hauteur+100);





EntryItem * entry;
NeuroneItem * item;
QGraphicsTextItem * text;
QFont f("Arial");
//Neurons
text = this->scene->addText("Neurons");
text->setPos(xNeurons - 10, 20);

text = this->scene->addText("Entries");
text->setPos(xEntry - 10, 20);

text = this->scene->addText(QString("Network name : ").append(name));
text->setPos(0, 0);

//Neurones de sortie
item = new NeuroneItem;
this->scene->addItem(item);
item->setPos(largeur - 10,hauteur/2 + 50);
text = this->scene->addText(QString("Output"));
text->setPos(largeur-15,hauteur/2 + 20);

f.setPixelSize(10);
for (int i = 0; i < NbrNeurons;i++){
    //Dessin du neurone
    item = new NeuroneItem;
    this->scene->addItem(item);
    item->setPos(xNeurons,i*40 + yNeurons);

    //Dessin de l'index
    text = this->scene->addText(QString::number(i+1),f);
    text->setPos(xNeurons,i*40 + yNeurons - 20);

    this->scene->addLine(xNeurons+10,i*40 + yNeurons+10,largeur,hauteur/2 + 60);
}
//entry
for (int i = 0;i < NbrEntries;i++){
entry = new EntryItem;
this->scene->addItem(entry);
entry->setPos(xEntry,i*40 + yEntries);

text = this->scene->addText(QString::number(i+1),f);
    text->setPos(xEntry - 30,i*40 + yEntries);


}

//lien neurones entrées
for (int i = 0; i < NbrEntries;i++){

    for (int j = 0; j < NbrNeurons;j++){
this->scene->addLine(xEntry+5,i*40 + yEntries+5,xNeurons+10,j*40 + yNeurons+10);

    }

}





this->perceptron->setScene(this->scene);
}
