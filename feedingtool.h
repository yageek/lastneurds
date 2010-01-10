#ifndef FEEDINGTOOL_H
#define FEEDINGTOOL_H
#include "Truth.h"
#include "ui_feedingtool.h"

class FeedingTool : public QWidget, private Ui::FeedingTool {
    Q_OBJECT
public:
    FeedingTool(QWidget *parent = 0);
    FeedingTool(int NbrNeurons , int NbrEntries, QString Threshold, QString name,QWidget *parent = 0);

protected:
    void changeEvent(QEvent *e);

   public slots:
    void addTruth(Truth);
    void subTruth();
    void updateTruth();
    void getExemple();
 private:
    int NbrEntries;
    int NbrNeurons;
    QString Threshold;
    QString name;
    vector<Truth> tableTruth;
};

#endif // FEEDINGTOOL_H
