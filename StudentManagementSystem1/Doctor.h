#pragma once
#include "Course.h"
#include "GraduationProject.h"
#include "Date.h"
#include <string>

class Doctor
{
public:
	Doctor();
	~Doctor();

	string name;
	Course Mycourses;
	GraduationProject MyGraduationProject;
	Date DoB; 


	void teachcourse(Course);
	void superviseProject(GraduationProject);
	
};

