#ifndef DOG_H
#define DOG_H

#include"Animal.h"
#include<string>
using namespace std;

class Dog:public Animal
{
    private:
        string breed;
    public:
        Dog(string name, double weight, string breed);
        string getBreed() const;
        void digHole() const;
        string makeNoise() const;
        void chaseCat() const;
        string eat() const;
};

#endif
