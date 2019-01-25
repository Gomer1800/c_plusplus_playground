#include "BaseFuse.h"
#include "Fuse1.h"
#include "Fuse2.h"
using namespace std;

Fuse2::Fuse2() {
	extendFuse();
	length2 += fuseLength;
	printFuse();
}

Fuse2::~Fuse2() {
	cout << length2 << "*" << endl;
}
