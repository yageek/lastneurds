#include "errorview.h"
#include <qwt_plot_curve.h>

ErrorView::ErrorView(QVector<double> errors,QWidget *parent) :
    QWidget(parent){
    setupUi(this);
    this->errors = errors;

this->qwtPlot->setTitle(tr("Error evolution"));
QVector<double> xTics;
for (unsigned int i = 0; i < sizeof(errors);i++){
xTics.push_back(i+1);

}
QwtPlotCurve *curve1 = new QwtPlotCurve("Error");
curve1->setData(errors,xTics);
curve1->attach(this->qwtPlot);
this->qwtPlot->replot();
this->setFixedWidth(800);
this->setWindowTitle("Coucou");
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
