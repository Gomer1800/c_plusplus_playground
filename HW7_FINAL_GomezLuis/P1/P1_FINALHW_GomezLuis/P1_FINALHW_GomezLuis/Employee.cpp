/*
Luis Gomez
CS 135 Mon Night
HW7 P1

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
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

//EMPLOYEE MEMBER FUNCTION DEFINITIONS

//CONSTRUCTORS

Employee::Employee(string n, string idNum, string dep, string pos, int yrs)
{
	name = n;
	idNumber = idNum;
	department = dep;
	position = pos;
	if (yrs >= 0)
	{
		yearsWorked = yrs;
	}
	else
	{
		yearsWorked = 0;
	}
}

Employee::Employee(string n, string idNum)
{
	name = n;
	idNumber = idNum;
	department, position = "";
	yearsWorked = 0;
}

Employee::Employee()
{
	name = "";
	idNumber = "";
	department = "";
	position = "";
	yearsWorked = 0;
}

//SET FUNCTIONS
bool Employee::setName(string n)
{
	name = n;
	bool validData = 1;

	return validData;
}

bool Employee::setIdNumber(string id)
{
	idNumber = id;
	bool validData = 1;

	return validData;
}

bool Employee::setDepartment(string dep)
{
	department = dep;
	bool validData = 1;

	return validData;
}

bool Employee::setPosition(string pos)
{
	position = pos;
	bool validData = 1;

	return validData;
}

bool Employee::setYearsWorked(int yrs)
{
	bool validData;

	if (yrs < 0)
	{
		validData = 0;
	}
	else if (yrs >= 0)
	{
		validData = 1;
	}

	return validData;
}

//GET FUNCTIONS
string Employee::getName()const
{
	return name;
}

string Employee::getIdNumber()const
{
	return idNumber;
}

string Employee::getDepartment()const
{
	return department;
}

string Employee::getPosition()const
{
	return position;
}

int Employee::getYearsWorked()const
{
	return yearsWorked;
}