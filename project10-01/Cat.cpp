#include"Animal.h"
#include"Cat.h"
#include<string>
#include<iostream>
using namespace std;

Cat::Cat(string name,double weight) : Animal(name,weight){ }

void Cat:: chaseMouse() const
{
    cout<<"I'm Chasing a mouse!";
}

string Cat:: eat() const
{
    return "Tasty kitty food!";
}

string Cat:: makeNoise() const
{
    return "Meow!";
}
