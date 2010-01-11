#include "errorview.h"
#include <qwt_plot_curve.h>

ErrorView::ErrorView(QVector<double> error,QWidget *parent) :
    QWidget(parent){
    setupUi(this);
   this->errors = error;

   for (unsigned  int i = 0; i < this->errors.size();i++){

std::cout << this->errors.at(i) << std::endl;


   }

this->qwtPlot->setTitle(tr("Error evolution"));
QVector<double> xTics;
for (unsigned int i = 0; i < errors.size();i++){
xTics.push_back(i+1);
std::cout << xTics.at(i) << std::endl;

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
