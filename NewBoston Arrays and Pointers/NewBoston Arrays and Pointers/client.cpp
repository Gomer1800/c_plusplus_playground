#include <iostream>
using namespace std;

int main() {
	int i;
	int meatBalls[5] = { 7,9,44,21,3 };

	for(i = 0; i < 5; i++)
	{
		cout << "meatBalls[" << i << "] \t " << &meatBalls[i] << " \t " << meatBalls[i] << endl;
	}

	// Array names are pointers to first element
	cout << "Printing meatBalls, points to address of first element =" << meatBalls << endl;

	cout << "" << meatBalls << endl;
	system("PAUSE");
}