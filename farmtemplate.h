#ifndef FARMTEMPLATE_H
#define FARMTEMPLATE_H
#include <vector>
#include "cat.h"
#include "dog.h"
#include "ianimal.h"

using namespace std;

template<class T>
class FarmTemplate // Template doesn't have a definition in cpp
{
public:
    void wakeUp();
    template<class jezisek, class santa>
    friend void operator+=(FarmTemplate<jezisek> &d, santa *z);

protected:
    vector<T> animals;
};

template<class T>
void FarmTemplate<T>::wakeUp(){
    for(auto a: animals){
        a->makeANoise();
    }
}

template <class jezisek, class santa>
void operator+=(FarmTemplate<jezisek> &d, santa *z){
    d.animals.push_back(z);
}
#endif // FARMTEMPLATE_H
