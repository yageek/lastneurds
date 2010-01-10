#ifndef EDITEXEMPLE_H
#define EDITEXEMPLE_H

#include "ui_editexemple.h"
#include "Truth.h"
class EditExemple : public QWidget, private Ui::EditExemple {
    Q_OBJECT
public:
    EditExemple(int,Truth,QWidget *parent = 0);
signals:
    EditedTruth(Truth);
protected:
    void changeEvent(QEvent *e);
public slots:
    void sendTruth();
private:
    int index;
};

#endif // EDITEXEMPLE_H
