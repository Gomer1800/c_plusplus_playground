/*
Luis Gomez
CS 135 Mon Nights
Q2
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// endl is used instead of \n because \n takes up one space on line, skewing the alignments
	cout << setw(6) << "3.0" << endl;
	cout << setw(6) << "*  5.0" << endl;
	cout << setw(6) << "------" << endl;
	cout << setw(6) << fixed << setprecision(2) << (3.0*5.0)<< endl;
	cout << "\n\n";
	cout << setw(6) << "7.1" << endl;
	cout << setw(6) << "*  8.3" << endl;
	cout << setw(6) << "-  2.2" << endl;
	cout << setw(6) << "------" << endl;
	cout << setw(6) << fixed << setprecision(2) << (7.1*8.3) - 2.2 << endl;
	cout << "\n\n";
	cout << setw(6) << "3.2" << endl;
	cout << setw(6) << "/ (6.1" << endl;
	cout << setw(6) << "*   5)" << endl;
	cout << setw(6) << "------" << endl;
	cout << setw(6) << fixed << setprecision(2) << 3.2 / (6.1 * 5) << endl;
	cout << "\n";
	//system("PAUSE");
	return 0;
}