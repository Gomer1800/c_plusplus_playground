#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
	int age;

public:
	Person() {
		name = "noName";
		age = 0;
	}

	friend ostream &operator <<(ostream &output, Person &p);
	friend istream &operator >>(istream &input, Person &p);
};


// IMPLEMENTATION
ostream &operator<<(ostream &output, Person &p) {
	output << "Overloaded <<" << endl;
	output << "My name is " << p.name << " and my age is " << p.age << endl;
	return output;
}


istream &operator >>(istream &input, Person &p) {
	input >> p.name >> p.age;
	return input;
}

int main() {
	cout << "Enter your name followed by your age: " << endl;
	Person me;
	cin >> me;
	cout << me;
	system("PAUSE");
}