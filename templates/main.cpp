#include<iostream>
#include<string>
#include"Swapper.h"
using namespace std;

//double getBigger(double a, double b);
//int getBigger(int a,int b);
//string getBigger(string a,string b);

template <class T>
T getBigger(T a,T b)
{
    return (a>b)?a:b;
}

template <class T>
T getSmaller(T a, T b)
{
    return (a>b)?b:a;
}

int main()
{

    Swapper<int> intSwapper(5,10);
    Swapper<string> stringSwapper("John","Bob");


    string name="John";
    string name1="Vivek";

    double biggerDub = getBigger(3.15,5.36);
    int biggerInt = getBigger(11,9);
    string biggerStr = getBigger(name,name1);

    cout <<"Bigger Items: "  << endl;
    cout <<"\t" << biggerDub << endl;
    cout <<"\t" << biggerInt << endl;
    cout <<"\t" << biggerStr << endl;

    double smallerDub = getSmaller(3.15,5.36);
    int smallerInt = getSmaller(11,9);
    string smallerStr = getSmaller(name,name1);

    cout <<"Smaller Items: "  << endl;
    cout <<"\t" << smallerDub<< endl;
    cout <<"\t" << smallerInt << endl;
    cout <<"\t" << smallerStr << endl;

 
    cout << "Testing the Swapper!"<<endl;
    cout<<intSwapper.getFirst() <<" "<<intSwapper.getSecond()<<endl;
    cout << stringSwapper.getFirst()<< " "<<stringSwapper.getSecond()<<endl;
    cout<<endl;

    intSwapper.swap();
    stringSwapper.swap();

    cout << "After the Swap!"<<endl;
    cout<<intSwapper.getFirst() <<" "<<intSwapper.getSecond()<<endl;
    cout << stringSwapper.getFirst()<< " "<<stringSwapper.getSecond()<<endl;
    cout<<endl;
    return 0;
}

//
//double getBigger(double a, double b)
//{
    //return (a>b)?a:b;
//}
//int getBigger(int a,int b)
//{
    //return (a>b)?a:b;
//}
//string getBigger(string a,string b)
//{
    //return (a>b)?a:b;
//}
