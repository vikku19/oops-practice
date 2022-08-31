#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

int main()
{
    vector<string>names(5);
    names.at(0)="Jhon";
    names.at(1)="Bob";
    names.at(2)="Sally";
    names.at(3)="Karen";
    names.at(4)="Smitty";
    
    for(string name:names)
    {
        cout<<name<<endl;
    }

    //Handing exception 
    try{
        //exception
        // Put the possible exception code here
        names.at(5)="Tyler";
    } 
    catch (const out_of_range& err){
        //cout<<err.what()<<endl;
        //Here we can also use cerr instead of cout.

    }
    return 0;
}
