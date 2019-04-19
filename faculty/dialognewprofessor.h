#ifndef DIALOGNEWPROFESSOR_H
#define DIALOGNEWPROFESSOR_H

#include <QDialog>

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
private:
    Ui::DialogNewProfessor *ui;
};

#endif // DIALOGNEWPROFESSOR_H
