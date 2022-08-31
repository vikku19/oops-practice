#ifndef ANIMAL_H
#define ANIMAL_H

#include<string>
using namespace std;
class Animal{
    //private
    private:
        string name;
        double weight;
    public:
        Animal(string name, double weight);
        string getName() const;
        void setName(string name);
        double getWeight() const;
        void setWeight(double weight);
        
        // For Dog class
        //virtual string makeNoise() const;
        // pure virtual function, now this class is abstract class
        //virtual string makeNoise() const = 0;
        //virtual string eat() const =0;


        // For Cat class
        virtual string makeNoise() const;
        virtual string eat() const = 0;
};
#endif
