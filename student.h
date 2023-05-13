
#include <iostream> 
#include "degree.h"
#include <string>
#pragma once
using namespace std;

class Student {
private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int days[3];
	DegreeProgram program;

public:

	Student(string studentID, string firstName, string lastName, string email, int age, int days[3], DegreeProgram program) {
		this->studentID = studentID;
		this->firstName = firstName;
		this->lastName = lastName;
		this->email = email;
		this->age = age;
		this->days[0] = days[0];
		this->days[1] = days[1];
		this->days[2] = days[2];
		this->program = program;
	}

	Student();

	void setID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setDays(int days[]);
	void setProgram(DegreeProgram program);

	string getID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int getDays(int index);
	DegreeProgram getProgram();

	void print();
};