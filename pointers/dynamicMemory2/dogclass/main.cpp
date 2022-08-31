#include"Dog.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
    //Dog myDog(string name, string breed);

    Dog* myDogPtr= new Dog("Rover","German Shepherd");
    Dog* yourDogPtr= new Dog("Fido" , "Beagle");

    cout<<"Using arrow member access"<<endl;
    cout<<myDogPtr->getName()<<" - "<<myDogPtr->getBreed()<<endl;
    cout<<yourDogPtr->getName()<<" - "<<yourDogPtr->getBreed()<<endl;

    cout<<endl;

    cout<<"Using defrencing and the dot operator"<<endl; //preferred
    cout<<(*myDogPtr).getName()<<" - "<<(*myDogPtr).getBreed()<<endl;
    cout<<(*yourDogPtr).getName()<<" - "<<(*yourDogPtr).getBreed()<<endl;
    
    delete myDogPtr;
    delete yourDogPtr;

    myDogPtr=nullptr;
    yourDogPtr=nullptr;

    return 0;
}
