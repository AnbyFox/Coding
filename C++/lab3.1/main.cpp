#include <iostream>
#include "my_array.h"

using namespace std;

int main()
{
    MyArray arr1, arr2, arr3;
    
    arr1.add(3); arr1.add(4); arr1.add(5);
    arr1.info();
    
    arr2.add(6); arr2.add(7); arr2.add(8);
    arr2.info();
    
    arr1.del();
    arr1.info();
    
    cout << "\n";
    
    arr3 = arr1 + arr2;
    arr3.info();
    
    cout << arr3 % 3 << "\n";
    cout << arr3 % 5 << "\n\n";
    
    arr1++;
    arr1.info();
    
    arr2--;
    arr2.info();
    
    return 0;
}