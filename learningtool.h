#ifndef LEARNINGTOOL_H
#define LEARNINGTOOL_H

#include "ui_learningtool.h"
 #include <QGraphicsScene>

class LearningTool : public QWidget, private Ui::LearningTool {
    Q_OBJECT
public:
    LearningTool(QWidget *parent = 0);
    LearningTool(int NbrNeurons,int NbrEntries,QString Threshold,QString name,QWidget *parent = 0);

protected:
    void changeEvent(QEvent *e);
private:
    int NbrNeurons;
    int NbrEntries;
    QString Threshold;
    QString name;
    QGraphicsScene *scene;
};

#endif // LEARNINGTOOL_H
