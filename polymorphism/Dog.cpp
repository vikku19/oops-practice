#include"Dog.h"
#include<iostream>
#include<string>
using namespace std;

Dog:: Dog(string name,double weight,string breed) : Animal(name,weight)
// Here we've to explicitly put base class constructor to use the private member of base class otherwise we'll get error.
{
    this->breed=breed;
}

string Dog:: getBreed() const
{
    return breed;
}

void Dog:: digHole() const
{
    cout<<"I'm digging a hole."<<endl;
}

// This function makeNoise is also in base class having same signature, when we have same function with same signature in base class and derived class then it is knows as method overriding. Wheen we'll call that function with derived class object then definition in derived clas
// will be printed, not the present class function definition.
string Dog::makeNoise() const
{
    return "woof - woof!";
}

void Dog:: chaseCat() const
{
    cout<<"Here, kitty kitty!"<<endl;
}

// This is a pure virtual function
string Dog::eat() const
{
    return "I love Dog food!";
}
