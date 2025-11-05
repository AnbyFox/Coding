#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

struct ComplexNumber
{
	double re;
	double im;
};

enum ComplexNumberType {RE, IM, COMPLEX};

void info(ComplexNumber c);
ComplexNumber plus(ComplexNumber c1, ComplexNumber c2);
ComplexNumber mult(ComplexNumber c1, ComplexNumber c2);
ComplexNumberType getNumberType(ComplexNumber c);

#endif