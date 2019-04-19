#include "dialognewstudent.h"
#include "ui_dialognewstudent.h"

DialogNewStudent::DialogNewStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogNewStudent)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("Ivan");
    ui->lineEdit_2->setPlaceholderText("Fedorovich");
    ui->lineEdit_3->setPlaceholderText("Bortsov");
    ui->lineEdit_4->setPlaceholderText("3.1");
}
QString DialogNewStudent::GetFirstName()
{
    return ui->lineEdit->text();
};
QString DialogNewStudent::GetMiddleName()
{
    return ui->lineEdit_2->text();
};
QString DialogNewStudent::GetLastName()
{
    return ui->lineEdit_3->text();
};
double DialogNewStudent:: GetAverageGrade()
{
    return ui->lineEdit_4->text().toDouble();
};
DialogNewStudent::~DialogNewStudent()
{
    delete ui;
}
