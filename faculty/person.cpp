#include "person.h"

/*-person-*/
Person::Person(QString firstname, QString middlename, QString lastname)
{
  this->firstname = firstname;
  this->middlename = middlename;
  this->lastname = lastname;
}

QString Person::ShowData()
{
  return firstname + ' '
       + middlename + ' '
       + lastname;
}
/*-professor-*/
Professor::Professor(QString firstname, QString middlename, QString lastname,
                     unsigned int age, unsigned int publications, QString position)
          :Person(firstname, middlename, lastname)
{
    this->publications = publications;
    this->age = age;
    this->position = position;
}
QString Professor::ShowData()
{
  return "Professor: " + Person::ShowData()+", "
       + QString::number(age) +" years"+ '\n'
       + "Position: " + position +'\n'
       + "Publications: "+ QString::number(publications);
}
/*-student-*/
Student::Student(QString firstname, QString middlename, QString lastname,
                 double average_grade)
        :Person(firstname, middlename, lastname)
{
  this->average_grade = average_grade;
}
QString Student::ShowData()
{
  return "Student: " + Person::ShowData()+'\n'
       +"Average grade: " +QString::number(average_grade, 'g', 2);
}
