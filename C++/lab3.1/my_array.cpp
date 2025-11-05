#include "my_array.h"
#include <iostream>

MyArray::MyArray()
{
    size = 0;
}

void MyArray::add(float x)
{
    data[size] = x;
    size++;
}

void MyArray::del()
{
    size--;
}

void MyArray::info()
{
    for(int i=0; i<size; i++)
    {
        std::cout << data[i] << ((i < size - 1) ? ", " : ".");
    }
    std::cout << "\n";
}

MyArray MyArray::operator+(MyArray arr)
{
	MyArray result;
	for(int i=0; i<size; i++) result.add(data[i]);
	for(int j=0; j<arr.size; j++) result.add(arr.data[j]);
	return result;
}
bool MyArray::operator%(float value)
{
	for(int i = 0; i<size; i++) {
		if(data[i] == value) return true;
	}
	
	return 0;
}

MyArray MyArray::operator++()
{
	for(int i=0; i < this->size; i++) this->data[i]++;
	return *this;
}
MyArray MyArray::operator++(int)
{
	for(int i=0; i < this->size; i++) this->data[i]++;
	return *this;
}

MyArray MyArray::operator--()
{
	for(int i=0; i < this->size; i++) this->data[i]--;
	return *this;
}
MyArray MyArray::operator--(int)
{
	for(int i=0; i < this->size; i++) this->data[i]--;
	return *this;
}
