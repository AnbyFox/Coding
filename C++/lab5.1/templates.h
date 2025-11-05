#ifndef TEMPLATES
#define TEMPLATES

#include <iostream>

template <class T>
void countMore(T *arr, T arg, int size)
{
	int count = 0;
	for(int i = 0; i < size; i++) {
		if(arr[i] > arg) count++;
	}
	
	std::cout << "Numbers more than " << arg << " counted: " << count << "\n";
}

template <class T>
void countLess(T *arr, T arg, int size)
{
	int count = 0;
	for(int i = 0; i < size; i++) {
		if(arr[i] < arg) count++;
	}
	
	std::cout << "Numbers lower than " << arg << " counted: " << count << "\n";
}

#endif