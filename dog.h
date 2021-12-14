#ifndef DOG_H
#define DOG_H

#include <string>
#include "ianimal.h"

class Dog : public IAnimal
{
public:
    Dog(string name, double weight, double height);

    virtual void makeANoise() override;
    double getHeight() const;

protected:
    double height;
};

#endif // DOG_H
