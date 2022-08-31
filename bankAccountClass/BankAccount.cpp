#include"BankAccount.h"
#include<string>
#include<iostream>
using namespace std;

BankAccount:: BankAccount(string owner){
    this->balance=0; // In single parameter constructor, balance will be zero.
    this->owner=owner;
}

BankAccount:: BankAccount(string owner,int balance){
    this->owner=owner;
    if(balance>0){
        this->balance=balance;
    }else{
        cout<<"Balance must be greater than Zero."<<endl;
    }
}

void BankAccount:: deposit(int amount){
    if(amount<=0){
        cout<<"Invalid Value"<<endl;
    }else{
        cout<<"Current balance of this account is "<<balance<<endl;
        this->balance+=amount; //
        cout<<"Amount of Rs. "<<amount<<" successfully Deposited."<<endl;
    }
}

void BankAccount:: withdraw(int amount){
    if(amount>0 && amount<=balance){
        cout<<"Current balance of this account is "<<balance<<endl;
        this->balance-=amount;
        cout<<"Amount of Rs. "<<amount<<" has been successfully Withdrawn."<<endl;
    }else{ 
        cout<<"You don't have sufficient Balance."<<endl;
    }
}

string BankAccount:: getOwner() const{
    return owner;
}

int BankAccount:: getBalance() const{
    return balance;
}
