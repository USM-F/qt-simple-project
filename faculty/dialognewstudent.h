#ifndef DIALOGNEWSTUDENT_H
#define DIALOGNEWSTUDENT_H

#include <QDialog>

namespace Ui {
class DialogNewStudent;
}

class DialogNewStudent : public QDialog
{
    Q_OBJECT

public:
    explicit DialogNewStudent(QWidget *parent = nullptr);
    ~DialogNewStudent();

    QString GetFirstName();
    QString GetMiddleName();
    QString GetLastName();
    double GetAverageGrade();


private:
    Ui::DialogNewStudent *ui;
};

#endif // DIALOGNEWSTUDENT_H
