#include "cat.h"
#include <iostream>
using namespace std;

Cat::Cat(string name, double weight): IAnimal(name, weight), lives(9)
{

}

void Cat::makeANoise()
{
    cout << this->getName() << ": meow meow" << endl;
}

int Cat::getLives() const
{
    return lives;
}
