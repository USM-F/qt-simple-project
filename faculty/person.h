#include <string>
#include <QString>
#include <QStringList>

#ifndef PERSON_H
#define PERSON_H

static const QStringList  positions = {"преподаватель", "старший преподаватель", "доцент", "профессор"};

class Person
{
public:
    Person(QString firstname, QString middlename, QString lastname);
    virtual ~Person () = default;
    virtual QString ShowData();
protected:
    QString firstname;
    QString middlename;
    QString lastname;
};

class Professor: public Person
{
public:
    Professor(QString firstname, QString middlename, QString lastname,
              unsigned int age, unsigned int publications, QString position);
    QString ShowData() override;
protected:
    unsigned int publications;
    unsigned int age;
    QString position;
};

class Student: public Person
{
public:
    Student(QString firstname, QString middlename, QString lastname,
            double average_grade);
    QString ShowData() override;
protected:
    double average_grade;
};

#endif // PERSON_H
