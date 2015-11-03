#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QtXml>
#include <QDebug>
#include <QtCore>
#include <vector>

QList<Student> roster;
Student LoggedinUser;
//std::vector<Student> roster;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    hideAll();
    LoadXML();
    showLogin();
    populateStudentList();

}

MainWindow::~MainWindow()
{
    delete ui;
}

//Choose Student to log in as
void MainWindow::showStudent()
{
    hideAll();
    ui->StudentList->setVisible(true);
    ui->Login->setVisible(true);
    ui->BacktoLoginButton->setVisible(true);
}

//hides all UI elements
void MainWindow::hideAll()
{
    ui->LoginAdminButton->setVisible(false);
    ui->LoginStudentButton->setVisible(false);
    ui->StudentList->setVisible(false);
    ui->Login->setVisible(false);
    ui->BacktoLoginButton->setVisible(false);
    ui->ViewProjectsStudentButton->setVisible(false);
    ui->EditStudentProfileButton->setVisible(false);
    ui->BacktoStudentsButton->setVisible(false);
    ui->ViewProjectsAdminButton->setVisible(false);
    ui->EditPPID->setVisible(false);
    ui->BacktoAdminLoggedButton->setVisible(false);
    ui->CGPAText->setVisible(false);
    ui->goalGradeText->setVisible(false);
    ui->AGCText->setVisible(false);
    ui->gradeText->setVisible(false);
    ui->CGPALabel->setVisible(false);
    ui->AGCLabel->setVisible(false);
    ui->gradeLabel->setVisible(false);
    ui->goalGradeLabel->setVisible(false);
    ui->ProjectLanguageBox->setVisible(false);
    ui->ProjectLanguageLabel->setVisible(false);
    ui->SortingDescLabel->setVisible(false);
    ui->PreferredOSText->setVisible(false);
    ui->PrefferredOSLabel->setVisible(false);
    ui->scheduleLabel->setVisible(false);
    ui->scheduleText->setVisible(false);
    ui->timeManagementLabel->setVisible(false);
    ui->timeManagementText->setVisible(false);
    ui->codingMethodLabel->setVisible(false);
    ui->codingMethodText->setVisible(false);
    ui->savePPIDButton->setVisible(false);
    ui->registerButton->setVisible(false);
    ui->RegisterLabel->setVisible(false);
    ui->projectDescLabel->setVisible(false);
    ui->projectList->setVisible(false);
    ui->BacktoStudentLoggedButton->setVisible(false);
    ui->createProjectButton->setVisible(false);
    ui->editProjectButton->setVisible(false);
    ui->createProjectCplusRadio->setVisible(false);
    ui->createProjectCRadio->setVisible(false);
    ui->createProjectGroupSizeLabel->setVisible(false);
    ui->createProjectGroupSizeText->setVisible(false);
    ui->createProjectJavaRadio->setVisible(false);
    ui->createProjectOtherRadio->setVisible(false);
    ui->createProjectProgramingLanguageLabel->setVisible(false);
    ui->createProjectPythonRadio->setVisible(false);
    ui->projectDescCreateLabel->setVisible(false);
    ui->saveNewProjectButton->setVisible(false);
    ui->BacktoAdminViewProjectsButton->setVisible(false);
    ui->createNewProjectDescLabel->setVisible(false);
    ui->projectDescEditText->setVisible(false);
    ui->EditProjectSaveButton->setVisible(false);
    ui->EditProjectDescLabel->setVisible(false);

    ui->editstudentACGLabel->setVisible(false);
    ui->editstudentACGspinbox->setVisible(false);
    ui->editstudentCGPALabel->setVisible(false);
    ui->editstudentCGPAspinbox->setVisible(false);
    ui->editstudentCodingConfidenceLabel->setVisible(false);
    ui->editstudentConfidencecomboBox->setVisible(false);
    ui->editstudentCodingMethodLabel->setVisible(false);
    ui->editstudentCodingMethodcomboBox->setVisible(false);
    ui->editstudentframe->setVisible(false);
    ui->editstudentGoalGradeLabel->setVisible(false);
    ui->editstudentGoalGradespinbox->setVisible(false);
    ui->editstudentGradespinbox->setVisible(false);
    ui->editstudentGradeLabel->setVisible(false);
    ui->editstudentGroupRoleLabel->setVisible(false);
    ui->editstudentGroupRolecomboBox->setVisible(false);
    ui->editstudentOnlineMeetingsLabel->setVisible(false);
    ui->editstudentOnlineMeetingscomboBox->setVisible(false);
    ui->editstudentPersonMeetingsLabel->setVisible(false);
    ui->editstudentPersonMeetingscomboBox->setVisible(false);
    ui->editstudentPreferredLanguageLabel->setVisible(false);
    ui->editstudentLanguagecomboBox->setVisible(false);
    ui->editstudentPreferredOSLabel->setVisible(false);
    ui->editstudentOScomboBox->setVisible(false);
    ui->editstudentPunctualityLabel->setVisible(false);
    ui->editstudentPunctualitycomboBox->setVisible(false);
    ui->editstudentScheduleLabel->setVisible(false);
    ui->editstudentSchedulecomboBox->setVisible(false);
    ui->editstudentTimeManagementLabel->setVisible(false);
    ui->editstudentTimeManagementcomboBox->setVisible(false);
    ui->editstudentWorkHoursLabel->setVisible(false);
    ui->editstudentWorkHoursspinbox->setVisible(false);
    ui->editstudentWorkPeriodLabel->setVisible(false);
    ui->editstudentWorkPeriodspinbox->setVisible(false);
    ui->editstudentpreferredCodingConfidenceLabel->setVisible(false);
    ui->editstudentpreferredCodingMethodcomboBox->setVisible(false);
    ui->editstudentpreferredCodingMethodLabel->setVisible(false);
    ui->editstudentpreferredframe->setVisible(false);
    ui->editstudentpreferredGoalGradeLabel->setVisible(false);
    ui->editstudentpreferredGoalGradespinbox_2->setVisible(false);
    ui->editstudentpreferredLabel->setVisible(false);
    ui->editstudentpreferredLanguagecomboBox->setVisible(false);
    ui->editstudentpreferredOnlineMeetingscomboBox->setVisible(false);
    ui->editstudentpreferredOnlineMeetingsLabel->setVisible(false);
    ui->editstudentpreferredPreferredLanguageLabel->setVisible(false);
    ui->editstudentpreferredTimeManagementcomboBox->setVisible(false);
    ui->editstudentpreferredWorkPeriodLabel->setVisible(false);
    ui->editstudentpreferredWorkPeriodspinbox->setVisible(false);
    ui->editstudentPreferredLanguageLabel->setVisible(false);
    ui->editstudentqualitiesLabel->setVisible(false);
    ui->editstudentbacktoStudentLoggedbutton->setVisible(false);
    ui->editstudentsavebutton->setVisible(false);




}

//Choose admin or student to log in as
void MainWindow::showLogin()
{
    hideAll();
    ui->LoginAdminButton->setVisible(true);
    ui->LoginStudentButton->setVisible(true);
}

//Show student logged in
void MainWindow::showStudentLogged()
{
    hideAll();
    ui->ViewProjectsStudentButton->setVisible(true);
    ui->EditStudentProfileButton->setVisible(true);
    ui->BacktoStudentsButton->setVisible(true);
}

void MainWindow::showStudentViewProjects()
{
    hideAll();
    ui->registerButton->setVisible(true);
    ui->RegisterLabel->setVisible(true);
    ui->projectDescLabel->setVisible(true);
    ui->projectList->setVisible(true);
    ui->BacktoStudentLoggedButton->setVisible(true);
}



void MainWindow::showNewProject()
{
    hideAll();
    ui->createProjectCplusRadio->setVisible(true);
    ui->createProjectCRadio->setVisible(true);
    ui->createProjectGroupSizeLabel->setVisible(true);
    ui->createProjectGroupSizeText->setVisible(true);
    ui->createProjectJavaRadio->setVisible(true);
    ui->createProjectOtherRadio->setVisible(true);
    ui->createProjectProgramingLanguageLabel->setVisible(true);
    ui->createProjectPythonRadio->setVisible(true);
    ui->projectDescCreateLabel->setVisible(true);
    ui->saveNewProjectButton->setVisible(true);
    ui->BacktoAdminViewProjectsButton->setVisible(true);
    ui->createNewProjectDescLabel->setVisible(true);

}





void MainWindow::showAdminViewProjects()
{
    hideAll();
    ui->projectDescLabel->setVisible(true);
    ui->projectList->setVisible(true);
    ui->BacktoAdminLoggedButton->setVisible(true);
    ui->createProjectButton->setVisible(true);
    ui->editProjectButton->setVisible(true);
}



void MainWindow::on_LoginAdminButton_clicked()
{
    showAdminLogged();
}

//Log in as selected student
void MainWindow::on_LoginStudentButton_clicked()
{
    showStudent();
}

void MainWindow::showAdminLogged()
{
    hideAll();
    ui->ViewProjectsAdminButton->setVisible(true);
    ui->EditPPID->setVisible(true);
    ui->BacktoLoginButton->setVisible(true);
}

void MainWindow::showPPIDScreen()
{
    hideAll();
    ui->BacktoAdminLoggedButton->setVisible(true);
    ui->CGPAText->setVisible(true);
    ui->goalGradeText->setVisible(true);
    ui->AGCText->setVisible(true);
    ui->gradeText->setVisible(true);
    ui->CGPALabel->setVisible(true);
    ui->AGCLabel->setVisible(true);
    ui->gradeLabel->setVisible(true);
    ui->goalGradeLabel->setVisible(true);
    ui->ProjectLanguageBox->setVisible(true);
    ui->ProjectLanguageLabel->setVisible(true);
    ui->SortingDescLabel->setVisible(true);
    ui->PreferredOSText->setVisible(true);
    ui->PrefferredOSLabel->setVisible(true);
    ui->scheduleLabel->setVisible(true);
    ui->scheduleText->setVisible(true);
    ui->timeManagementLabel->setVisible(true);
    ui->timeManagementText->setVisible(true);
    ui->codingMethodLabel->setVisible(true);
    ui->codingMethodText->setVisible(true);
    ui->savePPIDButton->setVisible(true);

}

void MainWindow::showEditProject()
{
    hideAll();
    ui->createProjectCplusRadio->setVisible(true);
    ui->createProjectCRadio->setVisible(true);
    ui->createProjectGroupSizeLabel->setVisible(true);
    ui->createProjectGroupSizeText->setVisible(true);
    ui->createProjectJavaRadio->setVisible(true);
    ui->createProjectOtherRadio->setVisible(true);
    ui->createProjectProgramingLanguageLabel->setVisible(true);
    ui->createProjectPythonRadio->setVisible(true);
    ui->saveNewProjectButton->setVisible(true);
    ui->BacktoAdminViewProjectsButton->setVisible(true);
    ui->EditProjectDescLabel->setVisible(true);
    ui->projectDescEditText->setVisible(true);
    ui->EditProjectSaveButton->setVisible(true);


}

void MainWindow::showEditStudentProfile(){

    hideAll();
    ui->editstudentACGLabel->setVisible(true);
    ui->editstudentACGspinbox->setVisible(true);

    ui->editstudentCGPALabel->setVisible(true);
    ui->editstudentCGPAspinbox->setVisible(true);
    ui->editstudentCGPAspinbox->setValue(LoggedinUser.getCGPA());

    ui->editstudentCodingConfidenceLabel->setVisible(true);
    ui->editstudentConfidencecomboBox->setVisible(true);

    ui->editstudentCodingMethodLabel->setVisible(true);
    ui->editstudentCodingMethodcomboBox->setVisible(true);

    ui->editstudentframe->setVisible(true);

    ui->editstudentGoalGradeLabel->setVisible(true);
    ui->editstudentGoalGradespinbox->setVisible(true);

    ui->editstudentGradespinbox->setVisible(true);
    ui->editstudentGradeLabel->setVisible(true);

    ui->editstudentGroupRoleLabel->setVisible(true);
    ui->editstudentGroupRolecomboBox->setVisible(true);

    ui->editstudentOnlineMeetingsLabel->setVisible(true);
    ui->editstudentOnlineMeetingscomboBox->setVisible(true);

    ui->editstudentPersonMeetingsLabel->setVisible(true);
    ui->editstudentPersonMeetingscomboBox->setVisible(true);

    ui->editstudentPreferredLanguageLabel->setVisible(true);
    ui->editstudentLanguagecomboBox->setVisible(true);
    ui->editstudentPreferredOSLabel->setVisible(true);
    ui->editstudentOScomboBox->setVisible(true);
    ui->editstudentPunctualityLabel->setVisible(true);
    ui->editstudentPunctualitycomboBox->setVisible(true);
    ui->editstudentScheduleLabel->setVisible(true);
    ui->editstudentSchedulecomboBox->setVisible(true);
    ui->editstudentTimeManagementLabel->setVisible(true);
    ui->editstudentTimeManagementcomboBox->setVisible(true);
    ui->editstudentWorkHoursLabel->setVisible(true);
    ui->editstudentWorkHoursspinbox->setVisible(true);
    ui->editstudentWorkPeriodLabel->setVisible(true);
    ui->editstudentWorkPeriodspinbox->setVisible(true);

    ui->editstudentpreferredCodingConfidenceLabel->setVisible(true);
    ui->editstudentpreferredCodingMethodcomboBox->setVisible(true);
    ui->editstudentpreferredCodingMethodLabel->setVisible(true);
    ui->editstudentpreferredframe->setVisible(true);
    ui->editstudentpreferredGoalGradeLabel->setVisible(true);
    ui->editstudentpreferredGoalGradespinbox_2->setVisible(true);
    ui->editstudentpreferredLabel->setVisible(true);
    ui->editstudentpreferredLanguagecomboBox->setVisible(true);
    ui->editstudentpreferredOnlineMeetingscomboBox->setVisible(true);
    ui->editstudentpreferredOnlineMeetingsLabel->setVisible(true);
    ui->editstudentpreferredPreferredLanguageLabel->setVisible(true);
    ui->editstudentpreferredTimeManagementcomboBox->setVisible(true);
    ui->editstudentpreferredWorkPeriodLabel->setVisible(true);
    ui->editstudentpreferredWorkPeriodspinbox->setVisible(true);
    ui->editstudentPreferredLanguageLabel->setVisible(true);
    ui->editstudentqualitiesLabel->setVisible(true);
    ui->editstudentbacktoStudentLoggedbutton->setVisible(true);
    ui->editstudentsavebutton->setVisible(true);





}


void MainWindow::on_StudentList_activated(const QModelIndex &index)
{

}

void MainWindow::on_Login_clicked()
{
    showStudentLogged();
    QString userName = ui->StudentList->currentItem()->text();

    int index;

    for(int i = 0; i < roster.size();i++)
    {
        if(roster[i].getName() == userName)
        {
            index = i;
        }
    }

    LoggedinUser = roster[index];

    qDebug() << LoggedinUser.getName() + " has Logged in.";
}

void MainWindow::on_ViewProjectsStudentButton_clicked()
{
    showStudentViewProjects();
}

void MainWindow::on_EditStudentProfileButton_clicked()
{
    showEditStudentProfile();
}

void MainWindow::on_BacktoStudentsButton_clicked()
{
    showStudent();
    qDebug() << LoggedinUser.getName() + " has Logged off.";
}

void MainWindow::on_BacktoLoginButton_clicked()
{
    showLogin();
}

void MainWindow::on_EditPPID_clicked()
{
  showPPIDScreen();
}

void MainWindow::on_ViewProjectsAdminButton_clicked()
{
    showAdminViewProjects();
}

void MainWindow::on_BacktoAdminLoggedButton_clicked()
{
    showAdminLogged();
}

void MainWindow::on_savePPIDButton_clicked()
{

}

void MainWindow::on_BacktoStudentLoggedButton_clicked()
{
    showStudentLogged();
}

void MainWindow::on_createProjectButton_clicked()
{
    showNewProject();
}

void MainWindow::on_BacktoAdminViewProjectsButton_clicked()
{
    showAdminViewProjects();
}



void MainWindow::on_editProjectButton_clicked()
{
    showEditProject();
}

void MainWindow::on_EditProjectSaveButton_clicked()
{

}

void MainWindow::on_editstudentbacktoStudentLoggedbutton_clicked()
{
    showStudentLogged();
}

//returns value of the attribute of the given root and tag
QString MainWindow::getXMLElement(QDomElement root,QString tag, QString attribute)
{
    QDomNodeList items = root.elementsByTagName(tag);
    QDomNode itemnode = items.at(0);

    if(itemnode.isElement())
    {
        QDomElement value = itemnode.toElement();

        //qDebug () << value.attribute(attribute);

        return value.attribute(attribute);
    }



    /*
    for(int i = 0; i <items.count(); i++)
    {
        QDomNode itemnode = items.at(i);

        //convert to element
        if(itemnode.isElement())
        {
            QDomElement itemle = itemnode.toElement();

            qDebug () << itemle.attribute(attribute);
        }
    }*/
}

void MainWindow::LoadXML()
{
    QDomDocument document;
    QDomElement root;
    QDomNodeList students;

    //load file
    QFile file("/home/admin/Desktop/D2/CuPID/Students.xml");

    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        qDebug() << "Failed to open file";
    }

    //Fill document with content from the xml
    else
    {
        if(!document.setContent(&file))
        {
            qDebug() << "Failed to load document";
        }
        file.close();
    }

    //Get the root of the XML file
    root = document.firstChildElement();

    //populate student list
    QDomNodeList items = root.elementsByTagName("Student");

    for(int i = 0; i <items.count(); i++)
    {
        QDomNode itemnode = items.at(i);

        //convert to element
        if(itemnode.isElement())
        {
            QDomElement itemle = itemnode.toElement();
            roster.push_back(Student());
            roster[i].setName(itemle.attribute("Name"));
        }
    }

    //QString test = roster[0]->getName();


    //Get a list of all student tags in XML file
    students = root.elementsByTagName("Student");
    //For each student in XML, create a student objects, populate qualifiers, and add to student roster.
    int temp;
    for(int i = 0; i < students.count(); i++)
     {
         QDomNode studentnode = students.at(i);
         //convert to an element
         if(studentnode.isElement())
         {
             QDomElement student = studentnode.toElement();
             roster[i].setCGPA((getXMLElement(student,"CGPA","value")).toFloat());
             //roster[i].setAGC((getXMLElement(student,"ChristineAverage","value")).toInt());
             roster[i].setgrade((getXMLElement(student,"Grade","value")).toFloat());
             roster[i].setgoalGrade((getXMLElement(student,"GoalGrade","value")).toInt());

             temp = (getXMLElement(student,"PersonMeetings","value")).toInt();
             if(temp == 1)
             {
                 roster[i].setpersonMeetings(true);
             }
             if(temp == 0)
             {
                 roster[i].setpersonMeetings(false);
             }

             temp = (getXMLElement(student,"OnlineMeetings","value")).toInt();
             if(temp == 1)
             {
                 roster[i].setonlineMeetings(true);
             }
             if(temp == 0)
             {
                 roster[i].setonlineMeetings(false);
             }

             roster[i].setpunctionality((getXMLElement(student,"Punctuality","value")).toInt());
             roster[i].settimeManagement((getXMLElement(student,"TimeManagement","value")).toInt());
             roster[i].setworkPeriodLength((getXMLElement(student,"WorkPeriodLength","value")).toInt());
             //qDebug() << i;
             roster[i].setschedule((getXMLElement(student,"Schedule","value")).toInt());
             roster[i].setcodeConfidence((getXMLElement(student,"Confidence","value")).toInt());
             roster[i].setpreferredLanguage((getXMLElement(student,"PreferredLanguage","value")).toInt());
             roster[i].setcodeMethod((getXMLElement(student,"CodingMethod","value")).toInt());
             //roster[i].setpreferredOS((getXMLElement(student,"PreferredOS","value")).toInt());
             roster[i].setgroupRole((getXMLElement(student,"GroupRole","value")).toInt());

             //preferred
             roster[i].setxCGPA((getXMLElement(student,"xCGPA","value")).toFloat());
             //roster[i].setAGC((getXMLElement(student,"xChristineAverage","value")).toInt());
             roster[i].setxgrade((getXMLElement(student,"xGrade","value")).toFloat());
             roster[i].setxgoalGrade((getXMLElement(student,"xGoalGrade","value")).toInt());

             temp = (getXMLElement(student,"xPersonMeetings","value")).toInt();
             if(temp == 1)
             {
                 roster[i].setxpersonMeetings(true);
             }
             if(temp == 0)
             {
                 roster[i].setxpersonMeetings(false);
             }

             temp = (getXMLElement(student,"xOnlineMeetings","value")).toInt();
             if(temp == 1)
             {
                 roster[i].setxonlineMeetings(true);
             }
             if(temp == 0)
             {
                 roster[i].setxonlineMeetings(false);
             }

             roster[i].setxpunctionality((getXMLElement(student,"xPunctuality","value")).toInt());
             roster[i].setxtimeManagement((getXMLElement(student,"xTimeManagement","value")).toInt());
             roster[i].setxworkPeriodLength((getXMLElement(student,"xWorkPeriodLength","value")).toInt());
             //qDebug() << i;
             roster[i].setxschedule((getXMLElement(student,"xSchedule","value")).toInt());
             roster[i].setxcodeConfidence((getXMLElement(student,"xConfidence","value")).toInt());
             roster[i].setxpreferredLanguage((getXMLElement(student,"xPreferredLanguage","value")).toInt());
             roster[i].setxcodeMethod((getXMLElement(student,"xCodingMethod","value")).toInt());
             //roster[i].setxpreferredOS((getXMLElement(student,"PreferredOS","value")).toInt());


         }
     }

}

void MainWindow::populateStudentList()
{
    for(int i =0; i< roster.size(); i++)
    {
        ui->StudentList->addItem(roster[i].getName());

    }

}
