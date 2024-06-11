#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <user.h>
#include <json.h>
#include <QVector>
#include <QProcess>
#include "caretaker.h"
#include "memento.h"
#include "books.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_login_clicked();

    void on_pb_signout_clicked();

    void on_pb_signout_admin_clicked();

    void on_pb_save_clicked();

    void on_pb_load_clicked();

    void on_pb_deletesaved_clicked();

    void on_pb_searchuser_clicked();

    void on_pb_searchadmin_clicked();

    void on_pb_addbook_clicked();

    void on_pb_deletebook_clicked();

private:
    Ui::MainWindow *ui;
    QVector<User> users;
    QVector<Books> books;
    Json jsonfile;
    Json jsonbooks;
    CareTaker caretaker;
};
#endif // MAINWINDOW_H
