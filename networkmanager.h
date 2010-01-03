#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

#include "ui_networkmanager.h"

class NetWorkManager : public QWidget, private Ui::NetWorkManager {
    Q_OBJECT
public:
    NetWorkManager(QWidget *parent = 0);

protected:
    void changeEvent(QEvent *e);
  private slots:
    void AddNetWork();
    void SubNetWork();
};

#endif // NETWORKMANAGER_H
