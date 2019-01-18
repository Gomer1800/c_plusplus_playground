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

#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"
using namespace std;

int main()
{
	const int SIZE = 3;
	Employee Trio[SIZE];
	Employee duo;
	duo.getName();

	Trio[0] = { "Jenny Jacobs", "JJ8990", "Accounting", "President", 15 };
	Trio[1] = { "Myron Smith", "MS7571", "IT\t", "Programmer", 5 };
	Trio[2] = { "Chris Raines", "CR6873", "Manufacturing", "Engineer", 30 };
	for (int index = 0; index < SIZE; index++)
	{
		if (index == 0)
		{
			cout << "|Name" << "\t\t|ID Number" << "\t|Department" << "\t|Position" << "\t|Years Worked" << endl;
		}
		cout << "|" + Trio[index].getName() << "\t|" + Trio[index].getIdNumber() << "\t\t|" + Trio[index].getDepartment() << "\t|" + Trio[index].getPosition() << "\t|" << Trio[index].getYearsWorked() << endl;
	}
	system("PAUSE");
	return 0;
}