#ifndef CAT_H
#define CAT_H

#include <string>
#include "ianimal.h"

class Cat : public IAnimal
{
public:
    Cat(string name, double weight);

    virtual void makeANoise() override;

    int getLives() const;

protected:
    int lives;
};

#endif // CAT_H
