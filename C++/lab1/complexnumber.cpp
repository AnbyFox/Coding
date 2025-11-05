#include <iostream>
#include "complexnumber.h"

void info(ComplexNumber c) 
{
	std::cout << "(" << c.re << (c.im < 0 ? " - " : " + ") << std::abs(c.im) << "*i)";
}

ComplexNumberType getNumberType(ComplexNumber c)
{
	ComplexNumberType result = COMPLEX;
	if(c.im == 0) result = IM;
	else if(c.re == 0) result = RE;
	else result = COMPLEX;
	
	return result;
}

ComplexNumber plus(ComplexNumber c1, ComplexNumber c2)
{
	ComplexNumber c;
	c.re = c1.re + c2.re;
	c.im = c1.im + c2.im;
	
	return(c);
}

ComplexNumber mult(ComplexNumber c1, ComplexNumber c2)
{
	ComplexNumber c;
	c.re = c1.re * c2.re;
	c.im = c1.im * c2.im;
	
	return(c);
}