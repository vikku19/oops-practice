#include<iostream>
#include<string>
#include"BankAccount.h"
using namespace std;

int main(){
    
    BankAccount b1("owner1");
    BankAccount b2("owner2",1000);
    //BankAccount b3("owner3",4000);
    
    b1.deposit(9000);
    cout<<"b1 BankAccount contains "<<b1.getBalance()<<endl;
    b1.withdraw(15000);// should throw warning
    cout<<"b1 still has "<<b1.getBalance()<<endl;
                         
    b2.getOwner();
    b2.deposit(9000);
    cout<<"b2 BankAccount contains "<<b1.getBalance()<<endl;
    b2.withdraw(5000);// should not throw warning
    cout<<"b2 still has "<<b2.getBalance()<<endl;
    //b3.getOwner();

    //b2.getBalance();
    //b3.getBalance();
}
