#include <iostream>
using namespace std;

/* Basic Pointer Tutorial

int main() {
	int fish = 5;
	cout << &fish << endl;

	int *fishPtr = &fish;
	cout << *fishPtr << endl;

	system("PAUSE");
}
*/

//Pass by reference

/*
void passByValue(int x);
void passByReference(int *x);

int main() {
	int betty = 13;
	int sandy = 13;

	passByValue(betty);
	cout << "Betty passed by value: " << betty << endl;
	passByReference(&sandy);
	cout << "Sandy passed by reference: " << sandy  << endl;
	system("PAUSE");
}

void passByValue(int x) {
	x = 99;

}

void passByReference(int *x) {
	*x = 66;
}
*/

// Pointers and Math

int main() {

	int bucky[5];
	int *bp0 = &bucky[0];
	int *bp1 = &bucky[1];
	int *bp2 = &bucky[2];

	cout << "bp0 is at " << bp0 << endl; 
	//each successive memory address is 4bytes away
	cout << "bp1 is at " << bp1 << endl;
	cout << "bp2 is at " << bp2 << endl;

	bp0 += 2;
	cout << "bp0 is at " << bp0 << endl; 
	//adding ints to a pointer changes what element it is pointing to
	//Math with pointers doesnt change the address
	bp0 =  bp0 - 2;
	cout << "bp0 is at " << bp0 << endl;
	system("PAUSE");
}