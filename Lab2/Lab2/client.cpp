/*
Luis Gomez
CS 137
Lab2 

This program demonstrates my understanding of the constructors
and destructors within an inheritence hierarchy.

The constructors from the base classes load first, incrementing 
the fuse of a dynamite stick in order from base class to lowest derived class.

The destructor for the derived class then triggers igniting
the fuse and burning the fuse length in order from lowest derived class
to highest base class

The number of increments can be modified by copying the child
fuse class headers/implementation. This will create the neccessary
constructor/destructor sequence that animates the dynamite explosion.

Future Goals:
-Create a Base class using a single array to display the animation
-
*/

#include "BaseFuse.h"
#include "Fuse1.h"
#include "Fuse2.h"

int main() {
	Fuse2 bomb;
	bomb.~Fuse2();

	system("PAUSE");
}