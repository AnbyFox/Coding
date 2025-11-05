#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
	public:
	int numerator;
	int denominator;
	Fraction();
	Fraction(int numerator, int denominator);
	Fraction(int n);
	operator double();
};

#endif