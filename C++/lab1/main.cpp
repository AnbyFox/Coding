#include <iostream>
#include "complexnumber.h"

int main(int argc, char** argv) {
	
	std::cout << "Hello World!\nHave fun with complex numbers!\n\n";
	
	ComplexNumber c1, c2, c3, c4, c5, c6, c7;
	
	c1.re = 1.0; c1.im = -2.0;	
	std::cout << "1. "; info(c1); std::cout << "\n";
	
	c2.re = 5.0; c2.im = -1.5;
	std::cout << "2. "; info(c2); std::cout << "\n";
	
	c3 = plus(c1,c2);
	std::cout << "\nSumming: "; info(plus(c1,c2)); std::cout << "\n";
	
	c4 = mult(c1,c2);
	std::cout << "\nMultiplying: "; info(mult(c1,c2)); std::cout << "\n";
	
	std::cout << "\nGetting complex number type:\n\n";
	
	c5.re = 1.0; c5.im = 4.3; // COMPLEX
	c6.re = 0.0; c6.im = 2.0; // RE
	c7.re = 3.0; c7.im = 0.0; // IM
	
	std::cout << "1. "; info(c5); std::cout << " " << getNumberType(c5) << "\n";
	std::cout << "2. "; info(c6); std::cout << " " << getNumberType(c6) << "\n";
	std::cout << "3. "; info(c7); std::cout << " " << getNumberType(c7) << "\n";
	
	return 0;
}