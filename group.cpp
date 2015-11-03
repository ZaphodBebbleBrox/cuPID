#include <QtCore>
#include "student.h"
#include "group.h"

Group::Group()
{
}


void Group::setId(int newId)
{
    id = newId;
}
void Group::setSize(int newSize)
{
    size = newSize;
}
void Group::Addmember(Student member)
{
    members.append(member);
}

int Group::getId()
{
    return id;
}
int Group::getSize()
{
    return size;
}
QList<Student> Group::getMembers()
{
    return members;
}
