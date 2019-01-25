/*
Luis Gomez
CS 135 Mon Night
HW7_P1

UML

Employee

-name: string
-idNumber: string
-department: string
-position: string
-yearsWorked: int

+Employee(n:string, idNum:string, dep:string, pos:string, yrs:int): constructor
+Employee(n:string, idNum:string): constructor
+Employee(): constructor
+setName(n:string): bool
+setIdNumber(id:string): bool
+setDepartment(dep:string): bool
+setPosition(pos:string): bool
+setYearsWorked(yrs:int): bool
+getName(): string
+getIdNumber(): string
+getDepartment(): string
+getPosition(): string
+getYearsWorked(): int
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // without this and , I was having major errors using strings
using namespace std;

//Employee Class Declaration
class Employee
{
private:
	string name;
	string idNumber;
	string department;
	string position;
	int yearsWorked;

public: // member function prototypes
	Employee(string, string, string, string, int);
	Employee(string, string);
	Employee();
	bool setName(string);
	bool setIdNumber(string);
	bool setDepartment(string);
	bool setPosition(string);
	bool setYearsWorked(int);
	string getName() const;
	string getIdNumber() const;
	string getDepartment() const;
	string getPosition() const;
	int getYearsWorked() const;
};

#endif