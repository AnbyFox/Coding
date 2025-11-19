#include "pet.h"

Pet::Pet()
{
    name = "NO NAME";
    type = "NO TYPE";
}

Pet::Pet(std::string name, std::string type)
{
    this->name = name;
    this->type = type;
}

void Pet::info() const
{
    std::cout << name.c_str() << " (" << type.c_str() << ")\n";
}

bool Pet::operator < (Pet b) const
{
    if (name != b.name)
    {
        return name < b.name;
    }
    else
    {
        return type < b.type;
    }
}

std::set<Pet> getPetsOfType(std::list<Pet> listOfPets, std::string type)
{
    std::set<Pet> petSet;

    for (std::list<Pet>::iterator it = listOfPets.begin(); it != listOfPets.end(); it++)
    {
        if(it->type == type)
        {
            petSet.insert(*it);
        }
    }

    return petSet;
}