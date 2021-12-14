#ifndef IANIMAL_H
#define IANIMAL_H

#include <string>
using namespace std;

class IAnimal
{
public:
    IAnimal(string name, double weight);

    // = 0 -> function doesn't have a body, it's always overriden
    virtual void makeANoise() = 0;

    double getWeight() const;
    const string &getName() const;

protected:
    string name;
    double weight;
};

#endif // IANIMAL_H
