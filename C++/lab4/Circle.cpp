#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle():GeometryFigure()
{

}

Circle::Circle(double _r):GeometryFigure()
{
	this->r = _r;
}

double Circle::P()
{
    std::cout << "P = " << 2 * M_PI * r << "\n";
}

double Circle::S()
{
    std::cout << "S = " << M_PI * r * r << "\n";
}

std::ostream& operator <<(std::ostream &os, const Circle &f)
{	
    return os << "This figure is a circle and its radius = " << f.r << "\n";
}