
#include <iostream>
#include "student.h" 
#include "degree.h"
#pragma once
using namespace std;

void Student::setID(string studentID) { 
	this->studentID = studentID; 
} 

void Student::setFirstName(string firstName) { 
	this->firstName = firstName; 
} 

void Student::setLastName(string lastName) { 
	this->lastName = lastName; 
} 

void Student::setEmail(string email) { 
	this->email = email; 
} 

void Student::setAge(int age) { 
	this->age = age; 
}

void Student::setDays(int days[]) { 
	this->days[0] = days[0]; 
	this->days[1] = days[1];
	this->days[2] = days[2];
}

void Student::setProgram(DegreeProgram program) { 
	this->program = program; 
} 

string Student::getID() {
	return this->studentID; 
} 

string Student::getFirstName() { 
	return this->firstName; 
} 

string Student::getLastName() { 
	return this->lastName; 
} 

string Student::getEmail() { 
	return this->email; 
} 

int Student::getAge() { 
	return this->age; 
} 

int Student::getDays(int index) { 
	return this->days[index]; 
} 

DegreeProgram Student::getProgram() { 
	return this->program; 
} 

void Student::print() {

	cout << this->studentID << "\t";
	cout << "First Name: " << this->firstName << "\t";
	cout << "Last Name: " << this->lastName << "\t";
	cout << "Email: " << this->email << "\t";
	cout << "Age: " << this->age << "\t";
	cout << "DaysInCourse: {" << this->days[0] << ", " << this->days[1] << ", " << this->days[2] << "} " << "\t";
	cout << "Degree Program: " << degreePrograms[this->program] << endl;
}

