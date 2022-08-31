#include<string>
#include<vector>
#include"Pizza.h"
#include<iostream>
using namespace std;

void printPizzaData(const Pizza& pizza);
int main(){

    Pizza p1("cheese",350,8);
    Pizza p2("pepperoni",700,8);
    p2.addTopping("pepperoni");
    Pizza p3("chicken-chilli",500,9);
    p3.addTopping("pepperoni");
    p3.addTopping("black olives");
    p3.addTopping("onion");
    p3.addTopping("mushroom");
    printPizzaData(p1);
    printPizzaData(p2);
    printPizzaData(p3);
}

void printPizzaData(const Pizza& p1){
    cout<<"Name: "<<p1.getName()<<endl;
    cout<<"Diameter: "<<p1.getDiameter()<<endl;
    cout<<"Cost: "<<p1.getCost()<<endl;
    cout<<"Toppings: ";
    p1.printToppings();
    //p1.addTopping("brust-cheese");
}
