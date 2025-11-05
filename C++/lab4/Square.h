#ifndef SQUARE_H
#define SQUARE_H

#include "GeometryFigure.h"
#include <iostream>

class Square : public GeometryFigure
{
	public:
    	Square();
    	Square(double a, double b);
    	friend std::ostream& operator <<(std::ostream &os, const Square &f);
    	
    	double P();
    	double S();
    	
    	double a;
    	double b;
};

#endif