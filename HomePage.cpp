#include "HomePage.h"
#include "ui_HomePage.h"

HomePage::HomePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_tuanHoanBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->TuanHoanPage);
}

void HomePage::on_TuanHoan_backBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->MenuPage);
}

void HomePage::on_TuanHoan_nextBtn_clicked()
{
    // ui->stackedWidget->setCurrentWidget(ui->MenuPage);
}