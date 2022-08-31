#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include<string>
using namespace std;

class BankAccount{
    //Private Member
    private:
        string owner;
        int balance;
    public:
        //single parameter
        BankAccount(string owner);
        //Overloaded Constructor
        BankAccount(string owner,int balance);
        void deposit(int amount);
        void withdraw(int amount);
        string getOwner() const;
        int getBalance() const;
};

#endif
