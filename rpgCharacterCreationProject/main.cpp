#include"Player.h"
#include"Warrior.h"
#include"Priest.h"
#include"Mage.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;


void printMainMenu();
void printRaceMenu();

Player* createPlayer(string playerName,int typeNum, int raceNum);
void doCleanup(vector<Player*>playerList);
Race getRace(int raceNum);

void printAll(vector<Player*> playerList);


int main()
{
    int choice;
    int raceNum;
    string playerName;

    vector<Player*> playerList;

    printRaceMenu();
    cin>>choice;
    cin.get();   // consume newline

    while (choice !=0)
    {
        cout<<"What would you like to name your character?"<<endl;
        getline(cin,playerName);

        Player* tempPlayer = createPlayer(playerName,choice,raceNum);
        playerList.push_back(tempPlayer);

        // next round
        printMainMenu();
        cin>>choice;
        cin.get();
    }

    printAll(playerList);
    doCleanup(playerList);
    cout<<"Program Done!"<<endl;

    return 0;
}



void printMainMenu()
{
    cout<<endl;
    cout<<"Which of the Follwoing would you like?\n"<<endl;
    cout<<"\t 1 - Create a Warrior"<<endl;
    cout<<"\t 2 - Create a Priest"<<endl;
    cout<<"\t 3 - Create a Mage"<<endl;
    cout<<"\t 0 - Finish creating player characters"<<endl;
}
void printRaceMenu()
{
    cout<<endl;
    cout<<"Which of the Follwoing Race would you like?\n"<<endl;
    cout<<"\t 1 - Human"<<endl;
    cout<<"\t 2 - Elf"<<endl;
    cout<<"\t 3 - Dwarf"<<endl;
    cout<<"\t 4 - Orc"<<endl;
    cout<<"\t 5 - Troll"<<endl;
}

Player* createPlayer(string playerName,int typeNum, int raceNum)
{
    Race playerRace = getRace(raceNum);
    Player* tempPlayer = nullptr;

    if(typeNum == 1)
    {
        tempPlayer = new Warrior(playerName,playerRace);
    }
    else if (typeNum==2)
    {
        tempPlayer= new Priest(playerName,playerRace);
    }
    else if(typeNum == 3)
    {
        tempPlayer = new Mage(playerName,playerRace);
    }
    return tempPlayer;
}

void doCleanup(vector<Player*>playerList)
{
    for ( Player* player : playerList)
    {
        delete player;
    }
    playerList.clear();
}

Race getRace(int raceNum)
{
    Race race;
    if(race == 1)
    {
        race = HUMAN;
    }else if(race == 2)
    {
        race = ELF;
    }else if(race == 3)
    {
        race = DWARF;
    }else if(race == 4)
    {
        race = ORC;
    }else {
        race = TROLL;
    }
    return race;
}

void printAll(vector<Player*> playerList)
{
    for ( Player* player: playerList)
    {
        cout<<"I'm "<<player->whatRace() << " and my attack is : "<<player->attack()<<endl;
    }
}

