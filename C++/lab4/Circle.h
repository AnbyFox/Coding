#ifndef CIRCLE_H
#define CIRCLE_H

#include "GeometryFigure.h"
#include <iostream>

class Circle : public GeometryFigure
{
	public:
    	Circle();
    	Circle(double r);
    	friend std::ostream& operator <<(std::ostream &os, const Circle &f);
    	
    	double P();
    	double S();
    	
    	double r;
};

#endif