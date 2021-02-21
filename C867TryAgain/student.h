#pragma once
#include <string>
#include "degree.h"

class Student
{
private:

	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3];
	DegreeProgram degreeProgram;

public:

	void setStudentID();
	void setFirstName();
	void setLastName();
	void setEmailAddress();
	void setAge();
	void setDaysInCourse();
	void setDegreeProgram();

	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int getDaysInCourse();
	DegreeProgram getDegreeProgram();


};