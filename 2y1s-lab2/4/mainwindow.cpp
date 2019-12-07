#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

static unsigned num; //Номер current нотатки

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

static std::vector<QString> note,archive,home,just_note, proj1, proj2;//Вектора з нотатків

void MainWindow::show_note(std::vector<QString>& note){//Функція для відображення вмісту вектора з нотатків
    QString tmp="";
    for(auto a:note)tmp+=a+"\n#################################################\n";
    ui->textEdit->setText(tmp);
}

void MainWindow::on_actionAdd_triggered()//Додавання нотатку
{
    note.push_back(ui->textEdit->toPlainText());
}

void MainWindow::on_actionNew_triggered()//Очищення екрану
{
    ui->textEdit->setText(QString());
}

void MainWindow::on_actionShow_note_triggered()//Відобрання поточного нотатку
{
    if(!note.empty())
        ui->textEdit->setText(note[num]);
}

void MainWindow::on_actionAdd_in_home_triggered()//Додавання нотатку в контексти
{
    if(!note.empty())
        home.push_back(note[num]);
}

void MainWindow::on_actionJust_note_triggered()
{
    if(!note.empty())
        just_note.push_back(note[num]);
}

void MainWindow::on_actionNext_triggered()//Збільшення номера поточного нотатку
{
    if(!note.empty())
        ui->textEdit->setText(note[num<note.size()-1? + num:num]);
}

void MainWindow::on_actionBack_triggered()//Зменшення номера поточного нотатку

{
    if(!note.empty())
        ui->textEdit->setText(note[num>0? --num:num]);
}

void MainWindow::on_actionAdd_to_archive_triggered()//Додавання нотатку в архів
{
    if(!note.empty()){
        archive.push_back(note[num]);
        auto tmp = note.begin();
        for(unsigned i=0; i<num; i++)
            tmp++;
        note.erase(tmp);
    }
}

void MainWindow::on_actionDelete_note_triggered()//Видалення поточного нотатку
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

void MainWindow::on_actionShow_all_Notes_triggered()//Відображення контекстів

{
    QString tmp="";
        for(auto a:note)tmp+=a+"\n###########################################\n";
        ui->textEdit->setText(tmp);
}

void MainWindow::on_actionShow_archive_triggered()//Відображення архіву
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

void MainWindow::on_actionShow_just_note_triggered()//Відображення теперешньої нотатки
{
    QString tmp="";
        for(auto a:just_note)tmp+=a+"\n###########################################\n";
        ui->textEdit->setText(tmp);
}

void MainWindow::on_actionExport_triggered()//Експорт у фйал (у мене MacOs тому я не додавав формат .txt
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



/*
void MainWindow::on_actionProject1_triggered()
{
    if(!note.empty())
        proj1.push_back(note[num]);
}

void MainWindow::on_actionProject2_triggered()
{
    if(!note.empty())
        proj2.push_back(note[num]);
}

void MainWindow::on_actionShow_project1_triggered()
{
    show_note(proj1);
}

void MainWindow::on_actionShow_project2_triggered()
{
    show_note(proj2);
}
*/


void MainWindow::on_actionInfo_triggered()
{
    ui->statusbar->showMessage("All is OK");
}
