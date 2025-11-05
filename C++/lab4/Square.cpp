#include "Square.h"
#include <iostream>
#include <cmath>

Square::Square():GeometryFigure()
{

}

Square::Square(double _a, double _b):GeometryFigure()
{
	this->a = _a;
	this->b = _b;
}

double Square::P()
{
    std::cout << "P = " << 2 * (a + b) << "\n";
}

double Square::S()
{
    std::cout << "S = " << a * b << "\n";
}

std::ostream& operator <<(std::ostream &os, const Square &f)
{	
    return os << "This figure is a square and its edges: (a = " << f.a << ", b = " << f.b << ")\n";
}