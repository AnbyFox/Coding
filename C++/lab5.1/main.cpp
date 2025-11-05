#include <iostream>
#include <cstdlib>

#include "templates.h"
#include "fraction.h"

using namespace std;

int main(int argc, char** argv) {
	int size = 5;
	int M[size];
	Fraction F[size];
	
	for(int i = 0; i < size; i++) {
		M[i] = rand() % 101;
		F[i] = (rand() % 101, rand() % 101);
	}
	
	for(int i = 0; i < 5; i++) cout << M[i] << (i < size-1 ? "," : ".\n");
	countMore(M, M[3], size);
	countLess(M, M[4], size);
	
	for(int i = 0; i < 5; i++) cout << F[i] << (i < size-1 ? "," : ".\n");
	countMore(F, F[3], size);
	countLess(F, F[4], size);
}