#ifndef PPID_H
#define PPID_H

#ifndef STUDENT_H
#define STUDENT_H

#include <QtCore>

class ppid
{
public:
    ppid();


    //Set Qualifiers
    void setCGPA(float newCGPA);
    //Average Grade Chrstine
    void setAGC(int newAGC);
    //2404 Grade
    void setgrade(int newGrade);
    void setgoalGrade(int newgoalGrade);
    void sethoursPerWeek(int newHoursPerWeek);
    void setpersonMeetings(bool meetings);
    void setonlineMeetings(bool meetings);
    void setpunctionality(int newPunctionality);
    void settimeManagement(int newTime);
    void setworkPeriodLength(int newPeriod);
    void setcodeConfidence(int newCodeConfidence);
    void setpreferredLanguage(int newLanguage);



    //Get Qualifiers
    QString getName();
    float getCGPA();
    //Average Grade Chrstine
    int getAGC();
    //2404 Grade
    int getgrade();
    int getgoalGrade();
    int gethoursPerWeek();
    bool getpersonMeetings();
    bool getonlineMeetings();
    int getpunctionality();
    int gettimeManagement();
    int getworkPeriodLength();
    int *getschedule();
    int getcodeConfidence();
    int getpreferredLanguage();
    int getcodeMethod();
    int getpreferredOS();
    int getgroupRole();

    //Get PreferredQualifiers
    float getxCGPA();
    //Average Grade Chrstine
    int getxAGC();
    //2404 Grade
    int getxgrade();
    int getxgoalGrade();
    int getxhoursPerWeek();
    bool getxpersonMeetings();
    bool getxonlineMeetings();
    int getxpunctionality();
    int getxtimeManagement();
    int getxworkPeriodLength();
    int *getxschedule();
    int getxcodeConfidence();
    int getxpreferredLanguage();
    int getxcodeMethod();
    int getxpreferredOS();

    //setx Qualifiers
    void setxCGPA(float newCGPA);
    //Average Grade Chrstine
    void setxAGC(int newAGC);
    //2404 Grade
    void setxgrade(int newGrade);
    void setxgoalGrade(int newgoalGrade);
    void setxhoursPerWeek(int newHoursPerWeek);
    void setxpersonMeetings(bool meetings);
    void setxonlineMeetings(bool meetings);
    void setxpunctionality(int newPunctionality);
    void setxtimeManagement(int newTime);
    void setxworkPeriodLength(int newPeriod);
    void setxschedule(int *newSchedule);
    void setxcodeConfidence(int newCodeConfidence);
    void setxpreferredLanguage(int newLanguage);
    void setxcodeMethod(int newMethod);
    void setxpreferredOS(int newOs);
    void setxgroupRole(int newRole);


private:
    //Qualifiers
    QString name;
    float CGPA;
    //Average Grade Chrstine
    int AGC;
    //2404 Grade
    int grade;
    int goalGrade;
    int hoursPerWeek;
    bool personMeetings;
    bool onlineMeetings;
    int punctionality;
    int timeManagement;
    int workPeriodLength;
    int schedule[7];
    int codeConfidence;
    int preferredLanguage;
    int codeMethod;
    int preferredOS;
    int groupRole;

    //PreferredQualifiers
    float xCGPA;
    //Average Grade Chrstine
    int xAGC;
    //2404 Grade
    int xgrade;
    int xgoalGrade;
    int xhoursPerWeek;
    bool xpersonMeetings;
    bool xonlineMeetings;
    int xpunctionality;
    int xtimeManagement;
    int xworkPeriodLength;
    int xschedule[7];
    int xcodeConfidence;
    int xpreferredLanguage;
    int xcodeMethod;
    int xpreferredOS;






};

#endif // STUDENT_H


#endif // PPID_H
