#include"Player.h"
//#include"Race.h"
#include<iostream>
#include<string>
using namespace std;


Player::Player(string name,Race race,int hitPoints,int magicPoint)
{
    this->name=name;
    this->race=race;
    this->hitPoints=hitPoints;
    this->magicPoints=magicPoint;
}
string Player:: getName() const
{
    return name;    
}
Race Player:: getRace() const
{   
    return race;
}
string Player:: whatRace() const
{
    string result="";
    if(race==HUMAN)
    {
        result="HUMAN";
    }else if(race==ELF)
    {
        result="ELF";
    }else if(race==DWARF)
    {
        result="DWARF";
    }else if(race==ORC)
    {
        result="ORC";
    }else if(race==TROLL)
    {
        result="TROLL";
    }
    return result;    
}
int Player:: getHitPoints() const
{
    return hitPoints;
}
int Player::getMagicPoint() const
{
    return magicPoints;
}
void Player::setName(string name)
{
    this->name=name;
}
void Player::setRace(Race race)
{
    this->race=race;
}
void Player::setHitPoints(int hitPoints)
{
    this->hitPoints=hitPoints;
}
void Player::setMagicPoints(int magicPoint)
{
    this->magicPoints=magicPoint;
}
