#include <iostream>
#include<sstream>
#include <string>
#include "roster.h"
#include "student.h"


Roster *classRosterArray[5];


void Roster::parseandadd(string studentData) {

	Roster *classRosterArray[5];
	{
		size_t rhs = studentData.find(",");
		string studentID = studentData.substr(0, rhs);

		size_t lhs = rhs + 1;
		rhs = studentData.find(",");
		string firstName = studentData.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData.find(",");
		string lastName = studentData.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData.find(",");
		string emailAddress = studentData.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData.find(",");
		string age = studentData.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData.find(",");
		string daysInCourse1 = studentData.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData.find(",");
		string daysInCourse2 = studentData.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData.find(",");
		string daysInCourse3 = studentData.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData.find("\0");
		string degreeProgram = (studentData.substr(lhs, rhs - lhs));

		cout << "FUCK YOU";

		//cout << studentID << " " << firstName << " " << lastName << " " << emailAddress << " " << age << " " << daysInCourse1 << " " << daysInCourse2 << " " << daysInCourse3 << " " << degreeProgram << endl ;

	}
}
