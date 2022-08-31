#include<iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    
    Rectangle rect1;
    Rectangle rect2(5.0,2.0);
    cout<<"rect1 area is "<<rect1.area()<< endl;
    cout<<"rect2 area is "<<rect2.area()<< endl;

    rect1.setLength(22);
    rect1.setWidth(11);

    cout<<"rect1 length is now "<<rect1.getLength()<<endl;
    cout<<"rect1 width is now "<<rect1.getWidth()<<endl;

    rect2.setLength(22);
    rect2.setWidth(10);
    cout<<"rect1 length is now "<<rect2.getLength()<<endl;
    cout<<"rect1 width is now "<<rect2.getWidth()<<endl;

    cout<<"rect1 area is now "<<rect1.area()<< endl;
    cout<<"rect2 area is now "<<rect2.area()<< endl;
    
    cout<<"rect1 perimeter is now "<< rect1.perimeter()<<endl;
    cout<<"rect2 perimeter is now "<< rect2.perimeter()<<endl;

    return 0;
}
