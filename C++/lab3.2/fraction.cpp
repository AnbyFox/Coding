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

Fraction operator+(Fraction f1, Fraction f2)
{
	Fraction result;
	result.denominator = f1.denominator * f2.denominator;
	result.numerator = f1.numerator * f2.denominator +
					   f2.numerator * f1.denominator;
					   
	return result;
}

Fraction operator+(Fraction f1, int n)
{
	Fraction result;
	result.denominator = f1.denominator;
	result.numerator = f1.numerator + n * f1.denominator;
					   
	return result;
}

Fraction operator+(int n, Fraction f2)
{
	Fraction result;
	result.denominator = f2.denominator;
	result.numerator = f2.numerator + n * f2.denominator;
					   
	return result;
}

Fraction operator-(Fraction f1, Fraction f2)
{
	Fraction result;
	result.denominator = f1.denominator * f2.denominator;
	result.numerator = f1.numerator * f2.denominator -
					   f2.numerator * f1.denominator;
					   
	return result;
}

Fraction operator-(Fraction f1, int n)
{
	Fraction result;
	result.denominator = f1.denominator;
	result.numerator = f1.numerator - n * f1.denominator;
					   
	return result;
}

Fraction operator-(int n, Fraction f2)
{
	Fraction result;
	result.denominator = f2.denominator;
	result.numerator = f2.numerator - n * f2.denominator;
					   
	return result;
}

Fraction::operator double()
{
	double result = numerator / (double)denominator;
	return result;
}

std::ostream& operator <<(std::ostream &os, const Fraction &f)
{	
	Fraction _f = f;
    return os << f.numerator << "/" << f.denominator << " (" << (double) _f <<")";
}