#include<iostream>
using namespace std;

void noConst(); // Non constant pointer to non constant data
void cp2ncd();  // constant pointer to Non constant Data
void ncp2cd();  // Non constant pointer to constant Data
void cp2cd();   // constant pointer to constant Data

void noChange(const double* const ptr);

int main()
{
    noConst();
    cout<<endl;

    cp2cd();
    cout<<endl;

    cp2ncd();
    cout<<endl;

    ncp2cd();
    cout<<endl;
    
    double* ptr=new double(5.25);
    noChange(ptr);
    delete ptr;
    ptr=nullptr;

    return 0;
}

// neither is a constant (both can be changed)
void noConst()
{
    cout<<"In noConst"<<endl;
    int* intPtr = new int(50);

    cout<<"\tOrig value : "<<*intPtr<<endl;
    
    *intPtr=100;
    cout<<"\tchange data: "<<*intPtr<<endl;

    delete intPtr; //delete current dynamic int

    intPtr = new int(125);

    cout<<"\tnew integer entirely: "<<*intPtr<<endl;
    
    delete intPtr;
}

// pointer is constant (cannot be changed)
// data is not constant (can be changed)
void cp2ncd()
{
    cout<<"In cp2ncd"<<endl;
    // Here const is after the int pointer because we want to int pointer to be constant not the data itself to be constant, 
    // const pointing to int 
    int* const intPtr= new int(100); 

    cout<<"\torig value: "<<*intPtr<<endl;
    *intPtr=250; // changing the value but pointer is still constant
    cout<<"\tnew integer value: "<<*intPtr<<endl;
    delete intPtr;

    // intPtr=new int(222); // getting error here because pointer is itself constamnt not the data, and we've alredy defined pointer.
    // here we're getting new memory address that is why error is coming.
}

//pointer is not constant (can be changed)
//data is constant (can't be changed)
void ncp2cd()
{
    cout<<"In ncp2cd "<<endl;
    const int* intPtr =new int(500);
    cout<<"\torig value: "<<*intPtr<<endl;
    delete intPtr;

    intPtr=new int(100);
    //*intPtr=1000; // Herre data is changing using derefrencing but it should be  constant and can't be changed
    cout<<"\tnew integer value: "<<*intPtr<<endl;
}

//pointer is constant
//data is constant

void cp2cd()
{
    cout<<"inside cp2cd"<<endl;
    const int* const intPtr = new int(5000);
    cout<<"\t orig value: "<<*intPtr<<endl;

    // no changes allowed
    // *intPtr = 1212;  //can't modify the pointer, data is constant
    // intPtr = new int(1212);  //ERROR - pointer is constant
    delete intPtr;
}

void noChange(const double* const ptr)
{
    cout<<*ptr<<endl;
    cout<<sizeof(ptr)<<endl;
}
