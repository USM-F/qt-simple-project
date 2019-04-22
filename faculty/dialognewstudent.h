#ifndef DIALOGNEWSTUDENT_H
#define DIALOGNEWSTUDENT_H

#include <QDialog>
#include <QPushButton>

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


private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

private:
    Ui::DialogNewStudent *ui;
    void setButtonOKCondition(bool line_edit_state);
};

#endif // DIALOGNEWSTUDENT_H
