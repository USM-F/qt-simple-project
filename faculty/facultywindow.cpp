#include "facultywindow.h"
#include "ui_facultywindow.h"

FacultyWindow::FacultyWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FacultyWindow)
{
    ui->setupUi(this);
}

FacultyWindow::~FacultyWindow()
{
    delete ui;
    if(!facultylist.isEmpty())
    {
        for (Person* & p : facultylist) {
            delete p;
        }
        facultylist.clear();
    }
}

void FacultyWindow::on_pushButtonProfessor_clicked()
{
    QString str = "";
    dlgP = new DialogNewProfessor(this);
    dlgP->show();
    if (dlgP->exec())
    {
        Professor *professor=new Professor( dlgP->GetFirstName(),
                                            dlgP->GetMiddleName(),
                                            dlgP->GetLastName(),
                                            dlgP->GetAge(),
                                            dlgP->GetPublications(),
                                            dlgP->GetPosition()
                                          );
        facultylist.append(professor);

        ui->listWidget->clear();
        ui->listWidget->addItem("Added: \n"+professor->ShowData());
    }
}

void FacultyWindow::on_pushButtonStudent_clicked()
{
    QString str = "";

    dlgS = new DialogNewStudent(this);
    dlgS->show();
    if(dlgS->exec())
    {
        Student *student=new Student( dlgS->GetFirstName(),
                                      dlgS->GetMiddleName(),
                                      dlgS->GetLastName(),
                                      dlgS->GetAverageGrade()
                                    );
        facultylist.append(student);

        ui->listWidget->clear();
        ui->listWidget->addItem("Added: \n"+student->ShowData());
    }
}

void FacultyWindow::on_pushButtonQuit_clicked()
{
    FacultyWindow::close();
}

void FacultyWindow::on_pushButton_clicked()
{
    QString str = "";
    ui->listWidget->clear();
    for (Person* & p : facultylist) {
        str = p->ShowData();
        ui->listWidget->addItem(str);
    }

    if (facultylist.isEmpty())
    {
        ui->listWidget->addItem("List of professors and students is empty");
    }
}
