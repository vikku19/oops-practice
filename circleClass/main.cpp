#include<iostream>
#include"Circle.h"

using namespace std;

void printCircleData(const Circle& circle);

int main(){

    Circle c1;
    Circle c2(5);
    printCircleData(c1);
    printCircleData(c2);
    c1.setRadius(8);
    printCircleData(c1);
    c2.setRadius(2.14);
    printCircleData(c2);
}

void printCircleData(const Circle& circle){
    cout<<"Circle with radius "<<circle.getRadius()<<endl;
    cout<<"      Circumfrence: "<<circle.circumfrence()<<endl;
    cout<<"              Area: "<<circle.area()<<endl;
}
