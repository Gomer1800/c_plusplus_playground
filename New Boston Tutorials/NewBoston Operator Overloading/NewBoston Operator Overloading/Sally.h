#pragma once
#include <iostream>
#ifndef SALLY_H

class Sally {
public:
	Sally();
	int num;
	Sally(int);

	//overloaded operator
	Sally operator+(Sally);
};
#endif // !SALLY_H
