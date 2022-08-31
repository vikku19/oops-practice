#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile;
    cout<<"Writing to file"<<endl;
    outfile.open("output.txt");
    outfile << "Hello World!" <<endl;
    outfile.close();

    cout<<"Done\n";
    return 0;
}
