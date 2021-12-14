#include <iostream>
#include "ianimal.h"
#include "dog.h"
#include "farmtemplate.h"

using namespace std;

int main()
{
    IAnimal* a = new Dog("Aayla", 20, 40);
    a->makeANoise();

    IAnimal* a2 = new Cat("Felix", 5);
    a2->makeANoise();

    FarmTemplate<Dog*> dogFarm;

    dogFarm += new Dog("Argo", 15, 20);
    dogFarm += new Dog("Max", 20, 25);
    dogFarm.wakeUp();

    cout << "" << endl;

    FarmTemplate<IAnimal*> farm;
    farm += new Dog("Rex", 50, 50);
    farm += new Cat("Riska", 4);
    farm.wakeUp();
    return 0;
}
