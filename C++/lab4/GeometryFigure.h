#ifndef GEOMETRYFIGURE_H
#define GEOMETRYFIGURE_H

#include <iostream>

class GeometryFigure
{
	public:
	    GeometryFigure();
	    virtual double P() = 0;
	    virtual double S() = 0;
};

#endif