#include<string>
#include<vector>
#include<iostream>
#include"Pizza.h"
using namespace std;

Pizza::Pizza(string name,int cost,int diameter){
    this->name=name;
    this->cost=cost;
    this->diameter=diameter;
    toppings.push_back("cheese");
}

void Pizza::addTopping(string topping){
    toppings.push_back(topping);
}

int Pizza:: getCost() const{
    return cost;
}

string Pizza::getName() const{
    return name;
}

int Pizza::getDiameter() const{
    return diameter;
}
void Pizza::printToppings() const{
    for(string str:toppings){
        cout<<str<<"\n";
    }
    cout<<endl;
}

