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

    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
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
void DialogNewStudent::setButtonOKCondition(bool line_edit_state)
{
    bool condition = line_edit_state
                    || ui->lineEdit->text().isEmpty()
                    || ui->lineEdit_2->text().isEmpty()
                    || ui->lineEdit_3->text().isEmpty()
                    || ui->lineEdit_4->text().isEmpty();

    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(!condition);
}

void DialogNewStudent::on_lineEdit_textChanged(const QString &arg1)
{
    setButtonOKCondition(arg1.isEmpty());
}

void DialogNewStudent::on_lineEdit_2_textChanged(const QString &arg1)
{
    setButtonOKCondition(arg1.isEmpty());
}

void DialogNewStudent::on_lineEdit_3_textChanged(const QString &arg1)
{
    setButtonOKCondition(arg1.isEmpty());
}

void DialogNewStudent::on_lineEdit_4_textChanged(const QString &arg1)
{
    setButtonOKCondition(arg1.isEmpty());
}
