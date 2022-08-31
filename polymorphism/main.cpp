#include"Animal.h"
#include"Dog.h"
#include<string>
#include<iostream>
using namespace std;

int main()
{
    //Animal myAnimal("sam",100);  // Instanting the base class by creating a object.
    Dog dog("Rover",80,"Greyhpund");
    
    // Polymorphism
    // Since, dog is inherited from a Animal class i.e derived from Animal, we can use Animal pointer to point a dog object.
    // It is known as polymorphic refrence.
    Animal* dogPtr = new Dog("Fido",115,"Golden Retriever");

    // Here, it is intresting to think about which version of makeNoise() funtion will be called?  
    // Animal version since it is pointer to Dog object or Dog version beacuse object is type of Dog.
    //  
    // C++ by default uses static binding or early binding, Runtime  system needs to know which function call should be made.
    //
    // so here Animal version will be called because by default it'll use static binding.
    // Animal is the type of pointer.
    //cout<<"Make noises? "<< dogPtr->makeNoise()<<endl;    
    //cout<<"Make noises? "<< (*dogPtr).makeNoise()<<endl; // drefrencing the pointer object

    // When the functon call is bound to the function definition at the runtime. It requires virtual keyword in the base class in c++.
    // To use late binding we will put virtual keyword in base class 
    //cout<<"Make noises? "<< dogPtr->makeNoise() <<endl;
    //cout<<"Make noises? "<<(*dogPtr).makeNoise() <<endl;
 
    // what if we don't know or don't want a default behaviour in base class to make noise, 
    // We can also say goodbye to base class makeNoise() function and make derived class to implement makeNoise() function.
    // The way we do this using pure virtual function and equal sign(=) or equal specifier to zero to that function in base class
    
    // pure virtual function makes the base class to abstract class, so  we can't instantiate the base class directly. 
    // So line number-> 9, where we're instantiating the base class will give error. And since Dog is not a abstract class we can 
    // intantiate it on line  number 15. we can still create a pointer of abstract class.
    cout<<"Make noises? "<< dogPtr->makeNoise() <<endl;
    cout<<"Make noises? "<<(*dogPtr).makeNoise() <<endl;

    
    // Implementing a new pure virtual function eat()
    cout<<"Dog Eating: "<<dogPtr->eat()<<endl;
    cout<<"Dog Eating: "<<(*dogPtr).eat()<<endl;


    //
    //cout<<"Animal Name: "<<myAnimal.getName()<<endl;
    //cout<<"Animal weight: "<<myAnimal.getWeight()<<endl;
    //cout<<"Animal noise: "<<myAnimal.makeNoise()<<endl;
//
    //cout<<"Dog's Name: "<<dog.getName()<<endl;
    //cout<<"Dog's weight: "<<dog.getWeight()<<endl;
    //cout<<"Dog's noise: "<<dog.makeNoise()<<endl;
    //cout<<"Dog's breed: "<<dog.getBreed()<<endl;
    //dog.digHole();
    //cout<<"Animal noise: "<<myAnimal.makeNoise()<<endl;
    //cout<<"Dog noise: "<<dog.makeNoise()<<endl;
    //dog.chaseCat();

    // deleting the animal pointer of dog object to clear up the memory
    delete dogPtr;
    dogPtr=nullptr;
    return 0;
}
