#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int _numerator, int _denominator)
{
	numerator = _numerator;
	denominator = _denominator;
}

Fraction::Fraction(int n)
{
	numerator = n;
	denominator = 1;
}

Fraction::operator double()
{
	double result = numerator / (double)denominator;
	return result;
}