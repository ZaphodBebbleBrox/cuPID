#include "ppid.h"

ppid::ppid()
{
}


//Set Qualifiers
void ppid::setCGPA(float newCGPA)
{
    CGPA = newCGPA;
}
//Average Grade Chrstine
void ppid::setAGC(int newAGC)
{
    AGC = newAGC;
}
//2404 Grade
void ppid::setgrade(int newGrade)
{
    grade = newGrade;
}
void ppid::setgoalGrade(int newgoalGrade)
{
    goalGrade = newgoalGrade;
}
void ppid::sethoursPerWeek(int newHoursPerWeek)
{
    hoursPerWeek = newHoursPerWeek;
}
void ppid::setpersonMeetings(bool meetings)
{
    personMeetings = meetings;
}
void ppid::setonlineMeetings(bool meetings)
{
    onlineMeetings = meetings;
}
void ppid::setpunctionality(int newPunctuality)
{
    punctionality = newPunctuality;
}
void ppid::settimeManagement(int newTime)
{
    timeManagement = newTime;
}
void ppid::setworkPeriodLength(int newPeriod)
{
    workPeriodLength = newPeriod;
}
void ppid::setschedule(int *newSchedule)
{
    *schedule = *newSchedule;
}
void ppid::setcodeConfidence(int newCodeConfidence)
{
    codeConfidence = newCodeConfidence;
}
void ppid::setpreferredLanguage(int newLanguage)
{
    preferredLanguage = newLanguage;
}
void ppid::setcodeMethod(int newMethod)
{
    codeMethod = newMethod;
}
void ppid::setpreferredOS(int newOS)
{
    preferredOS = newOS;
}
void ppid::setgroupRole(int newRole)
{
    groupRole = newRole;
}

//getx Qualifiers
float ppid::getxCGPA()
{
    return xCGPA;
}
//Average Grade Chrstine
int ppid::getxAGC()
{
    return xAGC;
}
//2404 Grade
int ppid::getxgrade()
{
    return xgrade;
}
int ppid::getxgoalGrade()
{
    return xgoalGrade;
}
int ppid::getxhoursPerWeek()
{
    return xhoursPerWeek;
}
bool ppid::getxpersonMeetings()
{
    return xpersonMeetings;
}
bool ppid::getxonlineMeetings()
{
    return xonlineMeetings;
}
int ppid::getxpunctionality()
{
    return xpunctionality;
}
int ppid::getxtimeManagement()
{
    return xtimeManagement;
}
int ppid::getxworkPeriodLength()
{
    return xworkPeriodLength;
}
int *ppid::getxschedule()
{
    return xschedule;
}
int ppid::getxcodeConfidence()
{
    return xcodeConfidence;
}
int ppid::getxpreferredLanguage()
{
    return xpreferredLanguage;
}
int ppid::getxcodeMethod()
{
    return xcodeMethod;
}
int ppid::getxpreferredOS()
{
    return xpreferredOS;
}


//setx Qualifiers
void ppid::setxCGPA(float newCGPA)
{
    xCGPA = newCGPA;
}
//Average Grade Chrstine
void ppid::setxAGC(int newAGC)
{
    xAGC = newAGC;
}
//2404 Grade
void ppid::setxgrade(int newGrade)
{
    xgrade = newGrade;
}
void ppid::setxgoalGrade(int newgoalGrade)
{
    xgoalGrade = newgoalGrade;
}
void ppid::setxhoursPerWeek(int newHoursPerWeek)
{
    xhoursPerWeek = newHoursPerWeek;
}
void ppid::setxpersonMeetings(bool meetings)
{
    xpersonMeetings = meetings;
}
void ppid::setxonlineMeetings(bool meetings)
{
    xonlineMeetings = meetings;
}
void ppid::setxpunctionality(int newPunctuality)
{
    xpunctionality = newPunctuality;
}
void ppid::setxtimeManagement(int newTime)
{
    xtimeManagement = newTime;
}
void ppid::setxworkPeriodLength(int newPeriod)
{
    xworkPeriodLength = newPeriod;
}
void ppid::setxschedule(int *newSchedule)
{
    *xschedule = *newSchedule;
}
void ppid::setxcodeConfidence(int newCodeConfidence)
{
    xcodeConfidence = newCodeConfidence;
}
void ppid::setxpreferredLanguage(int newLanguage)
{
    xpreferredLanguage = newLanguage;
}
void ppid::setxcodeMethod(int newMethod)
{
    xcodeMethod = newMethod;
}
void ppid::setxpreferredOS(int newOS)
{
    xpreferredOS = newOS;
}


