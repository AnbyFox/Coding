#include "mytime.h"
#include <iostream>

int main(int argc, char** argv) {
	MyTime t1, t2(3, 15, 30);
	t1.info();
	t2.info();
	
	std::cout << "\nSumming seconds.\n";
	
	t1 = t2.operate(50, '+');
	t1.info();
	
	t1 = t1.operate(0, 'r');
	t1.info();
	
	t1 = t2.operate(100, '-');
	t1.info();
	
	std::cout << "\nSumming time types.\n";
	
	MyTime t3(2, 1, 1), t4(3, 15, 30);
	t3.info();
	t4.info();
	
	t3 = t3.add(t4);
	t3.info();
	
	t4 = t4.take(t3);
	t4.info();
	
	return 0;
}