#ifndef DOG_H
#define DOG_H

#include<string>
using namespace std;

class Dog{
    
    private:
        string name;
        string breed;
    public:
        Dog(string name,string breed);
        string getName() const;
        string getBreed() const;
};
#endif

