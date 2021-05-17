#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // this->setCentralWidget(ui->scrollArea);
    //ui->scrollArea->setWidget(ui->verticalLayoutWidget);

    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());

    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
}

MainWindow::~MainWindow()
{
    delete ui;
}

