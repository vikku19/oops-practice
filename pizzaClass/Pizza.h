#ifndef PIZZA_H
#define PIZZA_H

#include<string>
#include<vector>
using namespace std;
class Pizza{

    //private
    private:
        string name;
        int cost;
        int diameter;
        vector<string>toppings;
    public:
        Pizza(string name, int cost, int diameter);
        void addTopping(string topping);
        int getCost() const;
        void printToppings() const;
        string getName() const;
        int getDiameter() const;
};
#endif
