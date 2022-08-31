#include<iostream>
using namespace std;

int main()
{
    enum Direction // These contants will integer value starts from 0
    {
        UP,
        DOWN,
        LEFT,
        RIGHT,
        STANDING
    };

    Direction myDirection = STANDING;
    cout<< myDirection <<endl;

    if(myDirection==UP)
    {
        cout<<"UP!"<<endl;
    }
    else if(myDirection==DOWN)
    {
        cout<<"DOWN" <<endl;
    } 
    else if(myDirection == LEFT)
    {
        cout<<"LEFT" <<endl;
    }
    else if (myDirection == RIGHT)
    {
        cout<<"RIGHT" <<endl;
    }
    else if (myDirection == STANDING)
    {
        cout<<"STANDING"<<endl;
    }
}


