#include<iostream>
#include<stdexcept>
using namespace std;

void processPositive(int num);
void doSomething(int num);
int main(){

    int input;

    try
    {
        cout<<"Enter a number to process!"<<endl;
        cin>>input;
        doSomething(input);
        cout<<"Processed!"<<endl;
    }
    catch(const invalid_argument& err)
    {
        cout<<"Main says, there is a problem."<<endl;
        cout<<err.what()<<endl;
    }
    return 0;
}

void processPositive(int num)
{
    cout<<"Welcome to the positive integer processor!"<<endl;
    if(num>=0)
    {
        cout<<"Good Job! You Passed in a positive num to process positive. "<<endl;
    }
    else
    {
        throw invalid_argument("Negative number pass in!");
    }
}

void doSomething(int num)
{
    try
    {
        processPositive(num);
        cout<<"Do something can process that number"<<endl;
    }
    catch(const invalid_argument &err)
    {
        cout<<"there is a problem."<<endl;
        throw; //rethrow
    }
}
