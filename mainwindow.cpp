#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    // 不设置导致在 macos 消失;
//    ui->menubar->setNativeMenuBar(false);
//    ui->menuBar->setNativeMenuBar(true);
    QObject::connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::jumpToNewPage);
    QObject::connect(ui->openAction, &QAction::triggered, this, &MainWindow::onOpenFileActionTriggered);
//    connect(ui->openAction, SIGNAL(triggered()), this, SLOT(onOpenFileActionTriggered()));

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::jumpToNewPage() {
    SomeForm *someForm = new SomeForm;
    someForm->show();
}

void MainWindow::onOpenFileActionTriggered() {
//    QString
    QDebug((QString *) "open file has been on clicked");
    printf("open file has been on clicked");
    jumpToNewPage();
}

void MainWindow::onCloseImageActionTriggered() {

}

void MainWindow::onSaveActionTriggered() {
//    class Hello {
//    private:
//        int num;
//    protected:
//
//    };
//    Hello *hello = new Hello;
//    delete hello;
//    hello = nullptr;
}

void MainWindow::onResaveActionTriggered() {

}
