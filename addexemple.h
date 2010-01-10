#ifndef ADDEXEMPLE_H
#define ADDEXEMPLE_H
#include "Truth.h"
#include "ui_addexemple.h"

class AddExemple : public QWidget, private Ui::AddExemple {
    Q_OBJECT
public:
    AddExemple(int NBrEntries,QWidget *parent = 0);
    void setupTruth(Truth,int);
public slots:
        void sendTruth();
protected:
    void changeEvent(QEvent *e);
signals:
    void ValidateTruth(Truth);

 private:
    int NbrEntries;
};

#endif // ADDEXEMPLE_H
