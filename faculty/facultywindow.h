#include "dialognewprofessor.h"
#include "dialognewstudent.h"
#include "person.h"

#ifndef FACULTYWINDOW_H
#define FACULTYWINDOW_H

#include <QMainWindow>

namespace Ui {
class FacultyWindow;
}

class FacultyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FacultyWindow(QWidget *parent = nullptr);
    ~FacultyWindow();

private slots:
    void on_pushButtonProfessor_clicked();

    void on_pushButtonStudent_clicked();

    void on_pushButtonQuit_clicked();

    void on_pushButton_clicked();

private:
    Ui::FacultyWindow *ui;
    DialogNewProfessor *dlgP;
    DialogNewStudent *dlgS;
    QList<Person*> facultylist;
};

#endif // FACULTYWINDOW_H
