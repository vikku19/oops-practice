#include<iostream>
using namespace std;

int main()
{
    //const int ARR_SIZE=5;
    int arraySize;
    cout<<"Enter the Size of Array:\n";
    cin>>arraySize;
    int* myArray = new int[arraySize]; // Dynamically size array, this is how vector is created.

    for(int i=0;i<arraySize;i++)
    {
        myArray[i]=i*2;
    }

    for(int i=0;i<arraySize; i++)
    {
        cout<<myArray[i]<<endl;
    }

    delete[] myArray;

    return 0;
}
