#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAdd_triggered();

    void on_actionNew_triggered();

    void on_actionAdd_to_archive_triggered();

    void on_actionDelete_note_triggered();

    void on_actionShow_all_Notes_triggered();

    void on_actionShow_note_triggered();

    void on_actionShow_archive_triggered();

    void on_actionAdd_in_home_triggered();

    void on_actionJust_note_triggered();

    void on_actionNext_triggered();

    void on_actionBack_triggered();

    void on_actionShow_home_triggered();

    void on_actionShow_just_note_triggered();

    void on_actionExport_triggered();

    void on_actionInfo_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
