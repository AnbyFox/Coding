#include "Tringle.h"
#include <iostream>
#include <cmath>

Tringle::Tringle():GeometryFigure()
{

}

Tringle::Tringle(double _a, double _b, double _c):GeometryFigure()
{
	this->a = _a;
	this->b = _b;
	this->c = _c;
}

double Tringle::P()
{
    std::cout << "P = " << a + b + c << "\n";
}

double Tringle::S()
{
    double halfP = (this->a+this->b+this->c)/2;
    std::cout << "S = " << sqrt(halfP * (halfP - this->a) * (halfP - this->b) * (halfP - this->c)) << "\n";
}

std::ostream& operator <<(std::ostream &os, const Tringle &f)
{	
    return os << "This figure is a tringle and its edges: (a = " << f.a << ", b = " << f.b << ", c = " << f.c << ")\n";
}