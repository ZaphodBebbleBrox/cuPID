#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtXml>
#include <QDebug>
#include <QtCore>
#include <QMainWindow>
#include "student.h"
#include "project.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_LoginAdminButton_clicked();

    void on_LoginStudentButton_clicked();

    void on_StudentList_activated(const QModelIndex &index);

    void on_Login_clicked();

    void on_ViewProjectsStudentButton_clicked();

    void on_EditStudentProfileButton_clicked();

    void on_BacktoStudentsButton_clicked();

    void on_BacktoLoginButton_clicked();

    void on_EditPPID_clicked();

    void on_ViewProjectsAdminButton_clicked();

    void on_BacktoAdminLoggedButton_clicked();

    void on_savePPIDButton_clicked();

    void on_BacktoStudentLoggedButton_clicked();

    void on_createProjectButton_clicked();

    void on_BacktoAdminViewProjectsButton_clicked();

    void on_editProjectButton_clicked();

    void on_EditProjectSaveButton_clicked();

    void on_editstudentbacktoStudentLoggedbutton_clicked();

private:
    Ui::MainWindow *ui;
    void showStudent();
    void hideAll();
    void showLogin();
    void showStudentLogged();
    void showAdminLogged();
    void showPPIDScreen();
    void showStudentViewProjects();
    void showAdminViewProjects();
    void showNewProject();
    void showEditProject();
    void showEditStudentProfile();
    void LoadXML();
    void populateStudentList();
    QString getXMLElement(QDomElement root,QString tagname, QString attribute);
};

#endif // MAINWINDOW_H
