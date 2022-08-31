#ifndef PLAYER_H
#define PLAYER_H

#include<string>
using namespace std;
//#include"Race.h"

enum Race {HUMAN,ELF, DWARF, ORC, TROLL };

class Player
{
    private:
        string name;
        Race race;
        int hitPoints;
        int magicPoints;
    public:
        Player(string name,Race race,int hitPoints,int magicPoint);
        string getName() const;
        Race getRace() const;
        string whatRace() const;
        int getHitPoints() const;
        int getMagicPoint() const;

        void setName(string name);
        void setRace(Race race);
        void setHitPoints(int hitPoints);
        void setMagicPoints(int magicPoint);
        virtual string attack() const = 0 ;
};


#endif
