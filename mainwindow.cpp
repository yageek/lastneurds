#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//On ajoute le manager dans le dock
this->manager = new NetWorkManager();
this->setCentralWidget(this->manager);

connect(this->ui->actionNetWorkManager,SIGNAL(triggered()),this->manager,SLOT(LaunchLearningTool()));


}

MainWindow::~MainWindow()
{
    delete ui;
}




