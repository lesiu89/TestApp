#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

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

void MainWindow::on_sendButton_clicked()
{
    QDateTime currentTime = QDateTime::currentDateTimeUtc();

    QString text2 = currentTime.toString(Qt::SystemLocaleDate);

    QString text = ui->textEdit->toPlainText();
    if (not text.isEmpty()){
        //ui->textBrowser->append(text << currentTime.toString(QLocale.system()));
        ui->textEdit->clear();
    }
}
