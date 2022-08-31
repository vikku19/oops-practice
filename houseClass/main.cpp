#include<iostream>
#include<string>
#include "House.h"

using namespace std;


void printHouseData(const House& house);

int main(){
    
    House myHouse;
    House yourHouse;

    //calling contructor before setters and getters to see the initalized values.
    cout<<"First Constructor calling\n";
    myHouse.print();
    yourHouse.print();

    //calling parametrized constructor before setters and getters to see the initalized values.
    cout<<"Second contructor calling\n";
    House myHouse1(1,2,"green");
    House myHouse2(5,7,"black");
    myHouse1.print();
    myHouse2.print();

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

/*    cout<<"My house is "<<myHouse.getColor()<<" and has "
        <<myHouse.getNumStories() << " stories and " 
        <<myHouse.getNumWindows() <<" windows."<<endl; 

      cout<<"Your house is "<<yourHouse.getColor()<<" and has "
        <<yourHouse.getNumStories() << " stories and " 
        <<yourHouse.getNumWindows() <<" windows."<<endl; 
 */   
    printHouseData(myHouse);
    printHouseData(yourHouse);

    myHouse.print();
    yourHouse.print();

    return 0;

}

void printHouseData(const House& house){ 
//Right now this method can change the object. We're passing address of house, if we don't we'll too many copied parameters. 
//    house.setNumStories(3); // Here we can see that how a method can be maipulated to preven that we nee to declare house obj as const.                                 
    cout<<"The house is "<<house.getColor()<<" and has "
        <<house.getNumStories() << " stories and " 
        <<house.getNumWindows() <<" windows."<<endl; 
}
