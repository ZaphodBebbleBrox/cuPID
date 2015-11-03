#ifndef GROUP_H
#define GROUP_H
#include <QtCore>
#include "student.h"

class Group
{
public:
    Group();

    void setId(int newId);
    void setSize(int newSize);
    void Addmember(Student member);

    int getId();
    int getSize();
    QList<Student> getMembers();

private:
    int id;
    int size;
    QList<Student> members;
};

#endif // GROUP_H
