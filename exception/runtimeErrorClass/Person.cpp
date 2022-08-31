#include"Person.h"
#include<iostream>
#include<string>
#include<stdexcept>

using namespace std;

Person::Person(string name){
    //this->name=name;
    setName(name);
}

string Person::getName() const{
    return name;
}

void Person::setName(string name){
    if(name!="John"){
        this->name=name;
    }else{
        throw runtime_error("John? That guy is too ugly for an object.");
    }
}
