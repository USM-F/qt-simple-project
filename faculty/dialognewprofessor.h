#ifndef DIALOGNEWPROFESSOR_H
#define DIALOGNEWPROFESSOR_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class DialogNewProfessor;
}

class DialogNewProfessor : public QDialog
{
    Q_OBJECT

public:
    explicit DialogNewProfessor(QWidget *parent = nullptr);
    ~DialogNewProfessor();

    QString GetFirstName();
    QString GetMiddleName();
    QString GetLastName();
    unsigned int GetAge();
    unsigned int GetPublications();
    QString GetPosition();
private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_lineEdit_5_textChanged(const QString &arg1);

private:
    Ui::DialogNewProfessor *ui;
    void setButtonOKCondition(bool line_edit_state);
};

#endif // DIALOGNEWPROFESSOR_H
