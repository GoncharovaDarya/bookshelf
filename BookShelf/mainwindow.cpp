#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //  Первичные настройки и инициализация
    ui->groupBox_shelfs->setEnabled(false);
    ui->groupBox_books->setEnabled(false);
    ui->pushButton_delBookShelf->setEnabled(false);
    shelfID=0;
    bshelfID=0;
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_addBookShelf_clicked()
{
    //создать объект BookShelf
    BookShelf bshelf;
    //добавление объекта в вектор
    bookShelfs.push_back(bshelf);
    //добавление в список интерфейса
    ui->listWidget_BShelfs->
            addItem(QString::number(bookShelfs.size()));


}

void MainWindow::on_listWidget_BShelfs_itemClicked(QListWidgetItem *item)
{
   shelfID=item->text().toInt();
   ui->listWidget_shelfs->clear();
   ui->groupBox_shelfs->setEnabled(true);
   ui->pushButton_delBookShelf->setEnabled(true);
   int shelfNum= bookShelfs[shelfID-1].getShelfN();
   if(shelfNum>0){
       for (int i=0;i<shelfNum;i++){
           ui->listWidget_shelfs->addItem(QString::number(i+1));
       }
   }
}

void MainWindow::on_pushButton_addShelf_clicked()
{
    bookShelfs[shelfID-1].addShelf();
    // получить кол-во полок
    int shelfNum= bookShelfs[shelfID-1].getShelfN();
    //добавить в список
    ui->listWidget_shelfs->
            addItem(QString::number(shelfNum));
}
