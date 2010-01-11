#ifndef ERRORVIEW_H
#define ERRORVIEW_H
#include<iostream>
#include<vector>
#include "ui_errorview.h"
using namespace std;
class ErrorView : public QWidget, private Ui::ErrorView {
    Q_OBJECT

  private:

QVector<double> errors;
public:
    ErrorView(QVector<double> error,QWidget *parent = 0);

protected:
    void changeEvent(QEvent *e);

};

#endif // ERRORVIEW_H
