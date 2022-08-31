#include"Animal.h"
#include<string>
using namespace std;


Animal:: Animal(string name, double weight)
{
    this->name=name;
    this->weight=weight;
}
string Animal::getName() const
{
    return name;
}
void Animal:: setName(string name)
{
    this->name=name;
}
double Animal::getWeight() const
{
    return weight;
}
void Animal::setWeight(double weight)
{
    this->weight=weight;
}

// To use pure virtual function we can remove the definition of the function from base class definition file.

/*
string Animal::makeNoise() const
{
    return "unknown";
}
*/
