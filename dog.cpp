#include "dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string name, double weight, double height): IAnimal(name, weight), height(height)
{
}

void Dog::makeANoise()
{
    cout << this->getName() << ": woof woof" << endl;
}

double Dog::getHeight() const
{
    return height;
}
