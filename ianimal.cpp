#include "ianimal.h"

IAnimal::IAnimal(string name, double weight): name(name), weight(weight)
{
}

double IAnimal::getWeight() const
{
    return weight;
}

const string &IAnimal::getName() const
{
    return name;
}
