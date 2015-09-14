// StudentManagementSystem1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Course.h"
#include "Date.h"
#include "Doctor.h"
#include "Student.h"
#include "GraduationProject.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    
	Date d1,r2;
	d1.Day = 7;
	d1.Month = 2;
	d1.Year = 1995;

	r2.Day = 8;
	r2.Month = 17;
	r2.Year = 1980;

	GraduationProject g1;
	g1.ProjectName = "MoneyinTheBank";

	
	Course c1;
	c1.name = "DigitalLogic";
	c1.division = 332;
	c1.symbol = 6765;
    
	Student s1;
	s1.name = "Mohammad";
	s1.DoB = d1;
	s1.ID = 342107122;
	s1.level = 4;
	s1.MyCourses = c1;
	s1.MyGraduationProject = g1;
	


	Doctor x1;
	x1.name = "Jameel";
	x1.DoB = r2;
	
	

	cout << "Welcome to our StudentManagementSystem: " << endl;

	cout << "Stduent name is:   " << s1.name << endl;

	cout << "Student DoB is:    " << d1.Day;
	cout << "/" << d1.Month;
	cout << "/" << d1.Year << endl;
	cout << "Student ID  is:  " << s1.ID << endl;
	cout << "Student Level is:     " << s1.level << endl;
	cout << "Student Course name is:     " << s1.MyCourses.name << endl;
	cout << "Student Course division is:     " << s1.MyCourses.division << endl;
	cout << "Student Course symbol is:     " << s1.MyCourses.symbol << endl;
	cout << "Doctor name is:     " << x1.name << endl;
	cout << "Doctor DoB is :     " << r2.Day;
	cout << "/" << r2.Month;
	cout << "/" << r2.Year<<endl;
	cout << "Doctor teach course is:     " << c1.name << endl;
	cout << "Doctor SuperviseProject is:     " << g1.ProjectName<< endl;
    
	cout << "Thank you for using our program" << endl;

	int x;
	cin >> x;

	




	
	

    
	




    return 0;
}

