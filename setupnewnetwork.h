#ifndef SETUPNEWNETWORK_H
#define SETUPNEWNETWORK_H

#include "ui_setupnewnetwork.h"

class SetupNewNetwork : public QWidget, private Ui::SetupNewNetwork {
    Q_OBJECT
public:
    SetupNewNetwork(QWidget *parent = 0);
public slots:
    void getNewNetwork();
    signals:
    void signalNewNetwork(int ,int,int,QString);

protected:
    void changeEvent(QEvent *e);
};

#endif // SETUPNEWNETWORK_H
