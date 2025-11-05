#ifndef TRINGLE_H
#define TRINGLE_H

#include "GeometryFigure.h"
#include <iostream>

class Tringle : public GeometryFigure
{
	public:
    	Tringle();
    	Tringle(double a, double b, double c);
    	friend std::ostream& operator <<(std::ostream &os, const Tringle &f);
    	
    	double P();
    	double S();
    	
    	double a;
    	double b;
    	double c;
};

#endif