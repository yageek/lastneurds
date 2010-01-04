#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QMdiSubWindow>
#include <QtGui/QMainWindow>
#include "networkmanager.h"
#include<QMdiArea>
namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    NetWorkManager * manager;


};

#endif // MAINWINDOW_H
