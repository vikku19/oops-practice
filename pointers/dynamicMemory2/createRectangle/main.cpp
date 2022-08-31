#include<iostream>
#include"Rectangle.h"

using namespace std;

int main()
{
    const int ARR_SIZE=3;
    
    Rectangle* rectPtrs[ARR_SIZE]; // This will create a array of ARR_SIZE and Rectangle pointer will be in the array.

    rectPtrs[0] = new Rectangle(5,3);
    rectPtrs[1] = new Rectangle(20,40);
    rectPtrs[2] = new Rectangle(2,10);

    for (int i=0;i<3;i++)
    {
        //cout<< rectPtrs[i]-> perimeter()<<endl;
        //cout<< rectPtrs[i]-> area() <<endl;
        cout<< (*rectPtrs[i]).perimeter()<<endl;
        cout<< (*rectPtrs[i]).area() <<endl;
    }

    // now, delete

    for (int i=0;i< ARR_SIZE ;i++)
    {
        delete rectPtrs[i];
        rectPtrs[i] = nullptr;
    }
}
