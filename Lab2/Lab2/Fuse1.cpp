#include "BaseFuse.h"
#include "Fuse1.h"
using namespace std;

Fuse1::Fuse1() {
	extendFuse();
	length1 += fuseLength;
	printFuse();
}

Fuse1::~Fuse1() {
	cout << length1 << "*" << endl;
}
