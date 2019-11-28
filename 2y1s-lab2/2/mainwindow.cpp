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

void MainWindow::on_actionShow_note_triggered()
{
    if(!note.empty())
        ui->textEdit->setText(note[num]);
}

void MainWindow::on_actionAdd_in_home_triggered()
{
    if(!note.empty())
        home.push_back(note[num]);
}

void MainWindow::on_actionJust_note_triggered()
{
    if(!note.empty())
        just_note.push_back(note[num]);
}

void MainWindow::on_actionNext_triggered()
{
    if(!note.empty())
        ui->textEdit->setText(note[num<note.size()-1? + num:num]);
}

void MainWindow::on_actionBack_triggered()
{
    if(!note.empty())
        ui->textEdit->setText(note[num>0? --num:num]);
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
    QString tmp="";
        for(auto a:note)tmp+=a+"\n###########################################\n";
        ui->textEdit->setText(tmp);
}

void MainWindow::on_actionShow_archive_triggered()
{
    QString tmp="";
        for(auto a:archive)tmp+=a+"\n###########################################\n";
        ui->textEdit->setText(tmp);
}

void MainWindow::on_actionShow_home_triggered()
{
    QString tmp="";
        for(auto a:home)tmp+=a+"\n###########################################\n";
        ui->textEdit->setText(tmp);
}

void MainWindow::on_actionShow_just_note_triggered()
{
    QString tmp="";
        for(auto a:just_note)tmp+=a+"\n###########################################\n";
        ui->textEdit->setText(tmp);
}

void MainWindow::on_actionExport_triggered()
{
    QFile file(QFileDialog::getSaveFileName(this, "Save as"));
        if (!file.open(QFile::WriteOnly | QFile::Text)) {
            QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
            return;
        }
        QTextStream out(&file);
        QString tmp="";
        for(auto a:note)tmp+=a+"\n###########################################\n";
        out << tmp;
        file.close();
}

void MainWindow::on_actionInfo_triggered()
{

}
