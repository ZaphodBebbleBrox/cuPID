#ifndef PROJECT_H
#define PROJECT_H
#include <QtCore>
#include "student.h"

class Project
{
public:
    Project();
    void setName(QString newName);
    void setDescription(QString newDesc);
    void setGroupSize(int newSize);
    void registerStudent(Student Student);

    QString getName();
    QString getDescription();
    int getGroupSize();
    QList<Student> getStudents();

private:
    QString name;
    QString description;
    int groupSize;
    QList<Student> registeredStudents;

};

#endif // PROJECT_H
