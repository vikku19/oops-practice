#include"House.h"
#include<iostream>
using namespace std;


House::House()  
//Constructor definition, initalizing with some values
//This is called no value constructor, it is different from Default constructors.
{
    this->numStories=1;
    this->numWindows=2;
    this->color="white";
}

// Overloading the contructors with different parameters
House::House(int numStories,int numWindows,string color)
// Parameterized constructors
{
    this->numStories=numStories;
    this->numWindows=numWindows;
    this->color=color;
}

House::~House()
{
        cout<<"Destructors Calling\n";
        cout<<"The " << color << " house with "<< numStories <<" stories and "<< numWindows << " windows is being destroyed!" << endl;
}
void House::setNumStories(int numStories) 
{
    this->numStories=numStories;
}

void House::setNumWindows(int numWindows)
{
    if(numWindows>=0 && numWindows<=10){
        this->numWindows=numWindows;
    }else{
        cout<<"Windows Number must be in between 0 to 10"<<endl;
    }
}

void House::setColor(string color)
{
    this->color=color;
}

int House::getNumStories() const
{
    return numStories;
}

int House::getNumWindows() const
{
    return numWindows;
}

string House::getColor() const
{
    return color;
}

void House::print() const
{
    cout<<"This House has "<<numStories<<" number of Stories and has "
        <<numWindows <<" number of Windows and has color of " <<color<<endl;       
}
