#include "errorview.h"
#include <qwt_plot_curve.h>

ErrorView::ErrorView(QVector<double> error,QWidget *parent) :
    QWidget(parent){
    setupUi(this);
   this->errors = error;
//table
   QHeaderView * header = this->errorTable->horizontalHeader();
QStringList list ;
list << "Error iterations";
this->errorTable->setHorizontalHeaderLabels(list);
header->setResizeMode(QHeaderView::Stretch);
header->setStretchLastSection(true);

this->errorTable->setSelectionBehavior(QAbstractItemView::SelectRows);
this->errorTable->setSelectionMode(QAbstractItemView::SingleSelection);
this->errorTable->setEditTriggers(QAbstractItemView::NoEditTriggers);


   for (unsigned  int i = 0; i < this->errors.size();i++){

this->errorTable->insertRow(i);
this->errorTable->setItem(i,0,new QTableWidgetItem(QString::number(errors.at(i))));


   }

this->qwtPlot->setTitle(tr("Error evolution"));
QVector<double> xTics;
for (unsigned int i = 0; i < errors.size();i++){
xTics.push_back(i+1);


}
QwtPlotCurve *curve1 = new QwtPlotCurve("Error");
curve1->setData(xTics,errors);
curve1->attach(this->qwtPlot);
this->qwtPlot->setAxisTitle(this->qwtPlot->xBottom,"Iterations");
this->qwtPlot->setAxisTitle(this->qwtPlot->yLeft,"Error");
this->qwtPlot->repaint();
}
void ErrorView::changeEvent(QEvent *e)
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
