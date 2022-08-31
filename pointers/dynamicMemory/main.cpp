#include<iostream>
using namespace std;
int main()
{
    int* myIntPtr = new int(123);

    // int* myIntPtr = new int;     // new keyword return the address of the memory it allocates in the heap or dynamic memory.
    // *myIntPtr=123;               //another way to derefrence it.

    bool *myBoolPtr = new bool(true);
    cout << myBoolPtr << endl;

    cout << *myBoolPtr << endl;
    cout << *myIntPtr <<endl;
    
    delete myBoolPtr;
    // Heap Memory must be freed otherwise heap doesn't clen up it's memory itself unlike stack. And can create memory leak 
    delete myIntPtr;    

    // Eventhough we're calling delete on myIntPtr in the memory, it was reserved for myIntPtr, myIntPtr still holds a memory address but 
    // the address is no longer valid to make sure it contain a predectible value.  
    myIntPtr = nullptr;
    // nullptr keyword represents the memory address at the location zero.
    myBoolPtr = nullptr;
    return 0;
}
