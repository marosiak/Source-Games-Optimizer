#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Enabled(QString typ){
    if(typ == "Connection"){
        ui->BadConnection_->setEnabled(true);
        ui->GoodConnection_->setEnabled(true);
    }
}

void MainWindow::on_GoodConnection__clicked(bool checked){
    if(checked){
        ui->BadConnection_->setChecked(false);
        ui->BadConnection_->setEnabled(false);
    }
    else{
        Enabled("Connection");
    }
}


void MainWindow::on_BadConnection__clicked(bool checked){
    if(checked){
        ui->GoodConnection_->setChecked(false);
        ui->GoodConnection_->setEnabled(false);
    }
    else{
        Enabled("Connection");
    }
}


