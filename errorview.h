#ifndef ERRORVIEW_H
#define ERRORVIEW_H
#include<iostream>
#include<vector>
#include "ui_errorview.h"
using namespace std;
class ErrorView : public QWidget, private Ui::ErrorView {
    Q_OBJECT

  private:

vector<float> errors;
public:
    ErrorView(vector<float> errors,QWidget *parent = 0);

protected:
    void changeEvent(QEvent *e);

};

#endif // ERRORVIEW_H
