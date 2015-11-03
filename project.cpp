#include "project.h"
#include "student.h"
#include <QtCore>

Project::Project()
{
}


void Project::setName(QString newName)
{
    name = newName;
}
void Project::setDescription(QString newDesc)
{
    description = newDesc;
}
void Project::setGroupSize(int newSize)
{
    groupSize = newSize;
}
void Project::registerStudent(Student newStudent)
{
    registeredStudents.append(newStudent);
}


QString Project::getName()
{
    return name;
}

QString Project::getDescription()
{
   return description;
}

int Project::getGroupSize()
{
    return groupSize;
}

QList<Student> Project::getStudents()
{
    return registeredStudents;
}
