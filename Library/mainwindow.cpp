#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    jsonfile.setPath("C:\\Users\\Abdulrhman\\Desktop\\Newfolder\\QT_WS\\Library\\build\\Desktop_Qt_6_7_1_MinGW_64_bit-Debug\\LoginDB.json");
    jsonbooks.setPath("C:\\Users\\Abdulrhman\\Desktop\\Newfolder\\QT_WS\\Library\\build\\Desktop_Qt_6_7_1_MinGW_64_bit-Debug\\Library.json");
    ui->setupUi(this);
    users = jsonfile.readFile();
    books = jsonbooks.readBooks();
    QStringList l = {"Fantasy","Kids","Religion","Romance"};
    ui->cb_filteradmin->addItems(l);
    ui->cb_filteruser->addItems(l);
    for(auto v:books)
    {
        qDebug()<<v.getAuthor()<<v.getBarcode()<<v.getCategory()<<v.getTitle();
    }
    ui->tabWidget->setTabVisible(1,false);
    ui->tabWidget->setTabVisible(2,false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_login_clicked()
{
    QString username=ui->LE_user->text();
    qint32 password = ui->LE_pass->text().toInt();
    qint32 i=0;
    for(;i<users.size();i++)
    {
        if(users[i].CheckUser(username,password))
        {
            if(users[i].getAuth()=="Admin")
            {
                ui->tabWidget->setTabVisible(0,false);
                ui->tabWidget->setTabVisible(1,true);
                ui->tabWidget->setTabEnabled(0,false);
                ui->tabWidget->setTabEnabled(1,true);
                ui->tabWidget->setTabEnabled(2,false);
            }
            else
            {
                ui->tabWidget->setTabVisible(0,false);
                ui->tabWidget->setTabVisible(2,true);
                ui->tabWidget->setTabEnabled(0,false);
                ui->tabWidget->setTabEnabled(1,false);
                ui->tabWidget->setTabEnabled(2,true);
            }
        }
    }
}


void MainWindow::on_pb_signout_clicked()
{
    ui->LE_pass->clear();
    ui->LE_user->clear();
    ui->tabWidget->setTabVisible(0,true);
    ui->tabWidget->setTabVisible(1,false);
    ui->tabWidget->setTabVisible(2,false);
    ui->tabWidget->setTabEnabled(0,true);
    ui->tabWidget->setTabEnabled(1,false);
    ui->tabWidget->setTabEnabled(2,false);
}


void MainWindow::on_pb_signout_admin_clicked()
{
    ui->LE_pass->clear();
    ui->LE_user->clear();
    ui->tabWidget->setTabVisible(0,true);
    ui->tabWidget->setTabVisible(1,false);
    ui->tabWidget->setTabVisible(2,false);
    ui->tabWidget->setTabEnabled(0,true);
    ui->tabWidget->setTabEnabled(1,false);
    ui->tabWidget->setTabEnabled(2,false);
}


void MainWindow::on_pb_save_clicked()
{
    caretaker.Save(ui->LE_user->text(),ui->LE_pass->text());
}


void MainWindow::on_pb_load_clicked()
{
    Memento m=caretaker.Load();
    ui->LE_user->setText(m.getUsername());
    ui->LE_pass->setText(m.getPassword());
}


void MainWindow::on_pb_deletesaved_clicked()
{
    caretaker.DeleteLast();
}


void MainWindow::on_pb_searchuser_clicked()
{
    books = jsonbooks.readBooks();
    QString title = ui->LE_titlesearchuser->text();
    QString filter = ui->cb_filteruser->currentText();
    if(title=="")
    {
        for(auto v:books)
        {
            if(filter == v.getCategory())
            {
                ui->listWidget_user->addItem(v.getAuthor());
                ui->listWidget_user->addItem(v.getBarcode());
                ui->listWidget_user->addItem(v.getCategory());
                ui->listWidget_user->addItem(v.getTitle());
                ui->listWidget_user->addItem("---------------------");
            }
        }
    }
    else
    {
        for(auto v:books)
        {
            if(title == v.getTitle()&& filter == v.getCategory())
            {
                ui->listWidget_user->addItem(v.getAuthor());
                ui->listWidget_user->addItem(v.getBarcode());
                ui->listWidget_user->addItem(v.getCategory());
                ui->listWidget_user->addItem(v.getTitle());
                QProcess *process = new QProcess();
                QString program = "notepad.exe";
                QString filePath = "C:\\Users\\Abdulrhman\\Desktop\\Newfolder\\QT_WS\\Library\\" + v.getBarcode() + ".txt";

                qDebug() << "Program: " << program;
                qDebug() << "File Path: " << filePath;

                connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished), process, &QProcess::deleteLater);

                process->start(program, QStringList() << filePath);

                if (!process->waitForStarted()) {
                    qDebug() << "Error: Process failed to start";
                    qDebug() << process->errorString();
                }
            }
        }
    }
}


void MainWindow::on_pb_searchadmin_clicked()
{
    books = jsonbooks.readBooks();
    QString title = ui->LE_titlesearchadmin->text();
    QString filter = ui->cb_filteradmin->currentText();
    if(title=="")
    {
        for(auto v:books)
        {
            if(filter == v.getCategory())
            {
                ui->listWidget_admin->addItem(v.getAuthor());
                ui->listWidget_admin->addItem(v.getBarcode());
                ui->listWidget_admin->addItem(v.getCategory());
                ui->listWidget_admin->addItem(v.getTitle());
                ui->listWidget_admin->addItem("---------------------");
            }
        }
    }
    else
    {
        for(auto v:books)
        {
            if(title == v.getTitle() && filter == v.getCategory())
            {
                ui->listWidget_admin->addItem(v.getAuthor());
                ui->listWidget_admin->addItem(v.getBarcode());
                ui->listWidget_admin->addItem(v.getCategory());
                ui->listWidget_admin->addItem(v.getTitle());
                QProcess *process = new QProcess();
                QString program = "notepad.exe";
                QString filePath = "C:\\Users\\Abdulrhman\\Desktop\\Newfolder\\QT_WS\\Library\\" + v.getBarcode() + ".txt";

                qDebug() << "Program: " << program;
                qDebug() << "File Path: " << filePath;

                connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished), process, &QProcess::deleteLater);

                process->start(program, QStringList() << filePath);

                if (!process->waitForStarted()) {
                    qDebug() << "Error: Process failed to start";
                    qDebug() << process->errorString();
                }

            }
        }
    }
}


void MainWindow::on_pb_addbook_clicked()
{
    QString t = ui->LE_titleadd->text();
    QString c = ui->LE_categoryadd->text();
    QString b = ui->LE_barcodewadd->text();
    QString a = ui->LE_authoradd->text();
    jsonbooks.addBook(t,c,b,a);
    qDebug()<<"TEST";
}


void MainWindow::on_pb_deletebook_clicked()
{
    books = jsonbooks.readBooks();
    QString bar = ui->LE_barcodedelete->text();
    jsonbooks.deleteBook(bar);
}

