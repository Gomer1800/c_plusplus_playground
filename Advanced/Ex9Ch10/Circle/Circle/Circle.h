#ifndef CIRCLE_H
#define CIRCLE_H

/*CIRCLE CLASS DECLARATION*/
class Circle  //class declaration
{
private:
	double radius;

public:                 //function prototypes
	void setRadius(double);
	double getRadius()const;
	double calcArea()const;
};


#endif
