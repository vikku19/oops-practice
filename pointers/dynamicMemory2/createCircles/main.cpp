#include<iostream>
#include"Circle.h"

using namespace std;

int main()
{
    int arraySize;
    cout << "Enter the Size of Array: ";
    cin >> arraySize;
    
    Circle** circleArray=new Circle*[arraySize];
    for(int i=0;i<arraySize;i++){
        int radius;
        cout<<"Enter the radius of a Circle object:\n";
        cin>>radius;
        circleArray[i]= new Circle(radius);
        cout<<(**circleArray).circumfrence()<<endl;
        cout<<(**circleArray).area()<<endl;

    }

    // delete indivisual circles
    for( int i=0;i<arraySize;i++)
    {
        delete circleArray[i];
        circleArray[i]=nullptr;
    }
    delete[] circleArray;

    return 0;
}
