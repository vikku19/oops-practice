#include<iostream>
using namespace std;

int main()
{
    int myLovelyInt = 150;

    double myDouble = 3.14;
    
    double* doublePtr = &myDouble;
    cout<<"Double Ptr value = "<< doublePtr<<endl;
    cout<<"Double Ptr =  "<< *doublePtr<<endl;

    int* somePtr = &myLovelyInt;
    
    cout<<"myLovelyInt = "<< myLovelyInt<<endl;
    cout<<"pointer holdes value = "<< somePtr<<endl;
    cout<<"pointer Defrenced = "<< *somePtr<<endl;

    *somePtr=200;

    cout<<"myLovelyInt = "<< myLovelyInt<<endl;
}
