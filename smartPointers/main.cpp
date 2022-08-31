#include<iostream>
#include<memory>

using namespace std;

int main()
{
    //unique_ptr <double> myDubPtr(new double);
    unique_ptr <double> myDubPtr = make_unique<double>();
    *myDubPtr = 3.14;
    cout<<"pointer - value: "<<*myDubPtr<<endl;
    return 0;
}
