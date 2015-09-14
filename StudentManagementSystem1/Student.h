#pragma once
#include <string>
#include "Course.h"
#include "GraduationProject.h"
#include "Date.h"


using namespace std;

class Student
{
public:
	Student();
	~Student();
	string name;
	int ID;
	int level;
	Course MyCourses;
	GraduationProject MyGraduationProject;
	Date DoB; 

	void registeGraduationProject(GraduationProject);
	void registerCourse(Course); 



};

