#include <iostream>
#include "fraction.h"

int main(int argc, char** argv)
{
	Fraction f1(1, 2);
	Fraction f2 = 3;
	Fraction f3;
	
	f3 = f1 + f2;
	std::cout << f3 << std::endl;
	f3 = f1 + 2;
	std::cout << f3 << std::endl;
	f3 = 2 + f1;
	std::cout << f3 << std::endl;
	
	f3 = f1 - 2;
	std::cout << f3 << std::endl;
	f3 = 2 - f1;
	std::cout << f3 << std::endl;
	
	return 0;
}