#include "BaseFuse.h"
using namespace std;

BaseFuse::BaseFuse() {
	printFuse();
	extendFuse();
	fuse0 += fuseLength;
	printFuse();
}

BaseFuse::~BaseFuse() {
	cout << fuse0 << "*" << endl;
	cout << startingLength << "*" << endl;
	cout << "BOOM!" << endl;
}
void BaseFuse::extendFuse() {
	fuseLength += "--";
}

void BaseFuse::printFuse() {
	cout << fuseLength << endl;
}