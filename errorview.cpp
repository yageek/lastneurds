#include "errorview.h"
#include <qwt_plot_curve.h>

ErrorView::ErrorView(vector<float> errors,QWidget *parent) :
    QWidget(parent){
    setupUi(this);
    this->errors = errors;

this->qwtPlot->setTitle(tr("Error evolution"));

QwtPlotCurve *curve1 = new QwtPlotCurve("Error");


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
