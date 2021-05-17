#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
    //ui->scrollArea->setWidget(ui->verticalLayoutWidget);

//    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());

//    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
//    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
//    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
//    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
//    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
//    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
//    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
//    ui->scrollAreaWidgetContents->layout()->addWidget(new QTextEdit());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}

void MainWindow::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "open");
    QFile file(filename);
    currentFile = filename;
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "damn", "fuck");
    }
    setWindowTitle(filename);
    QTextStream in(&file);

    QString text = in.readAll();
    ui->textEdit->setText(text);

}
