#include"Circle.h"
using namespace std;

//const double PI=3.14159;

Circle::Circle() : PI(3.14159){ // We can use member variable like this and we can also add multiple variable like this like ,radius(1)
    radius=1;
}
Circle::Circle(double radius): PI(3.14159){ //member variable
    this->radius=radius;
}
double Circle::getRadius() const{
    return radius;
}
void Circle::setRadius(double radius){
    this->radius=radius;
}
double Circle::circumfrence() const{
    return 2*PI*radius;
}
double Circle::area() const{
    return PI*radius*radius;
}
