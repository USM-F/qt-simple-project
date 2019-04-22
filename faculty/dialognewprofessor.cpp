#include "dialognewprofessor.h"
#include "ui_dialognewprofessor.h"
#include "person.h"

DialogNewProfessor::DialogNewProfessor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogNewProfessor)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("Kleminty");
    ui->lineEdit_2->setPlaceholderText("Hristoforovich");
    ui->lineEdit_3->setPlaceholderText("Bargausen");
    ui->lineEdit_4->setPlaceholderText("67");
    ui->lineEdit_5->setPlaceholderText("131");
    ui->comboBox->addItems(positions);

    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
}
QString DialogNewProfessor::GetFirstName()
{
    return ui->lineEdit->text();
};
QString DialogNewProfessor::GetMiddleName()
{
    return ui->lineEdit_2->text();
};
QString DialogNewProfessor::GetLastName()
{
    return ui->lineEdit_3->text();
};
unsigned int DialogNewProfessor:: GetAge()
{
    return ui->lineEdit_4->text().toUInt();
};
unsigned int DialogNewProfessor:: GetPublications()
{
    return ui->lineEdit_5->text().toUInt();
};
QString DialogNewProfessor::GetPosition()
{
    return ui->comboBox->currentText();
};
DialogNewProfessor::~DialogNewProfessor()
{
    delete ui;
}

void DialogNewProfessor::setButtonOKCondition(bool line_edit_state)
{
    bool condition = line_edit_state
                    || ui->lineEdit->text().isEmpty()
                    || ui->lineEdit_2->text().isEmpty()
                    || ui->lineEdit_3->text().isEmpty()
                    || ui->lineEdit_4->text().isEmpty()
                    || ui->lineEdit_5->text().isEmpty();

    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(!condition);
}

void DialogNewProfessor::on_lineEdit_textChanged(const QString &arg1)
{
    setButtonOKCondition(arg1.isEmpty());
}

void DialogNewProfessor::on_lineEdit_2_textChanged(const QString &arg1)
{
    setButtonOKCondition(arg1.isEmpty());
}

void DialogNewProfessor::on_lineEdit_3_textChanged(const QString &arg1)
{
    setButtonOKCondition(arg1.isEmpty());
}

void DialogNewProfessor::on_lineEdit_4_textChanged(const QString &arg1)
{
    setButtonOKCondition(arg1.isEmpty());
}

void DialogNewProfessor::on_lineEdit_5_textChanged(const QString &arg1)
{
    setButtonOKCondition(arg1.isEmpty());
}
