#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

static unsigned num;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

static std::vector<QString> note,archive,home,just_note;

void MainWindow::on_actionAdd_triggered()
{
    note.push_back(ui->textEdit->toPlainText());
}

void MainWindow::on_actionNew_triggered()
{
    ui->textEdit->setText(QString());
}

void MainWindow::on_actionAdd_to_archive_triggered()
{
    if(!note.empty()){
        archive.push_back(note[num]);
        auto tmp = note.begin();
        for(unsigned i=0; i<num; i++)
            tmp++;
        note.erase(tmp);
    }
}

void MainWindow::on_actionDelete_note_triggered()
{
    if(!note.empty()){
        auto tmp = note.begin();
        for(unsigned i=0; i<num; i++)
            tmp++;
        note.erase(tmp);
        if(num>0)
            --num;
    }
}

void MainWindow::on_actionShow_all_Notes_triggered()
{

}

void MainWindow::on_actionShow_note_triggered()
{
    if(!note.empty())
        ui->textEdit->setText(note[num]);
}

void MainWindow::on_actionShow_archive_triggered()
{

}

void MainWindow::on_actionAdd_in_home_triggered()
{
    if(!note.empty())
        home.push_back(note[num]);
}
