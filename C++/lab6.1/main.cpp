#include <iostream>
#include "pet.h"

using namespace std;

int main()
{
    Pet b1;
    Pet b2("Victor", "Cat");
    Pet b3("Daniel", "Dog");
    Pet b4("Ri", "Hamster");
    Pet b5("Scarfi", "Cat");
    Pet b6("Tosya", "Cat");
    Pet b7("Sharf", "Dog");


    std::list<Pet> petList;
    std::set<Pet> petSet;

    petList.push_back(b1);
    petList.push_back(b2);
    petList.push_back(b3);
    petList.push_back(b4);
    petList.push_back(b5);
    petList.push_back(b6);
    petList.push_back(b7);

    for (std::list<Pet>::iterator it = petList.begin(); it != petList.end(); it++)
    {
        it->info();
    }

    std::cout << "- - - - - - - >" << "\n";

    petSet = getPetsOfType(petList, "Hamster");

    for (std::set<Pet>::iterator it = petSet.begin(); it != petSet.end(); it++)
    {
        it->info();
    }


    return 0;
}