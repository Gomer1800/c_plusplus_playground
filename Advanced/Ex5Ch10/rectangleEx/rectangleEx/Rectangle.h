#ifndef RECTANGLE_H // A preprocessor directive, there are 3 w/ #
#define RECTANGLE_H

//Rectangle Class Declaration
class Rectangle
{
private:                 //make the attributes private
	double length;
	double width;

public:                 //function prototypes
	Rectangle(double, double); // CONSTR PROTOTYPE. This is also known as the signature of the constructor
	Rectangle();
	bool setLength(double);
	bool setWidth(double);
	double getLength()const;
	double getWidth()const;
	double calcArea()const;
};

#endif