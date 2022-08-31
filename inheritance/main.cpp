#include"Animal.h"
#include"Dog.h"
#include<string>
#include<iostream>
using namespace std;

int main()
{
    Animal myAnimal("sam",100);
    Dog dog("Rover",80,"Greyhpund");
    cout<<"Animal Name: "<<myAnimal.getName()<<endl;
    cout<<"Animal weight: "<<myAnimal.getWeight()<<endl;
    cout<<"Animal noise: "<<myAnimal.makeNoise()<<endl;

    cout<<"Dog's Name: "<<dog.getName()<<endl;
    cout<<"Dog's weight: "<<dog.getWeight()<<endl;
    cout<<"Dog's noise: "<<dog.makeNoise()<<endl;
    cout<<"Dog's breed: "<<dog.getBreed()<<endl;
    dog.digHole();
    cout<<"Animal noise: "<<myAnimal.makeNoise()<<endl;
    cout<<"Dog noise: "<<dog.makeNoise()<<endl;
    dog.chaseCat();

    //myAnimal.get();
    return 0;
}
