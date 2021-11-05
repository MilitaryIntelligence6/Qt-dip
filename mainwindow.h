#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "someform.h"

#include "Pch.h"

#ifdef DEBUG
#include <QDebug>
#endif

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    void jumpToNewPage();

private slots:

    void onOpenFileActionTriggered();
};
#endif // MAINWINDOW_H
