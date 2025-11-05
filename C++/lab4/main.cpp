#include <iostream>

#include "GeometryFigure.h"
#include "Tringle.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

int main()
{
    GeometryFigure *f1;
    Circle c1(5);
    Square s1(4, 6);
    Tringle t1(3, 4, 5);

    cout << c1;
    f1 = &c1;
    f1->P();
    f1->S();

    cout << s1;
    f1 = &s1;
    f1->P();
    f1->S();

    cout << t1;
    f1 = &t1;
    f1->P();
    f1->S();

    return 0;
}