#include<iostream>
#include<string>
using namespace std;

class House{

    private:
        int  numStories;
        int numWindows;
        string color;
    
    public:
        void setNumStories(int numStories) 
        {
            this->numStories=numStories;
        }

        void setNumWindows(int numWindows){
            if(numWindows>=0 && numWindows<=10){
                this->numWindows=numWindows;
            }else{
                cout<<"Windows Number must be in between 0 to 10"<<endl;
            }
        }

        void setColor(string color){
            this->color=color;
        }
        
        int getNumStories() const{
            return numStories;
        }

        int getNumWindows() const{
            return numWindows;
        }

        string getColor() const{
            return color;
        }
}; //End of the class name House

void printHouseData(const House& house);

int main(){
    
    House myHouse;
    House yourHouse;

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    cout<<"My house is "<<myHouse.getColor()<<" and has "
        <<myHouse.getNumStories() << " stories and " 
        <<myHouse.getNumWindows() <<" windows."<<endl; 

/*    cout<<"Your house is "<<yourHouse.getColor()<<" and has "
        <<yourHouse.getNumStories() << " stories and " 
        <<yourHouse.getNumWindows() <<" windows."<<endl; 
 */   
    printHouseData(myHouse);
    printHouseData(yourHouse);
    return 0;

}

void printHouseData(const House& house){ //Right now this method can change the object. We're passing address of house, if we don't we'll 
                                         //too many copied parameters. 
//    house.setNumStories(3); // Here we can see that how a method can be maipulated to preven that we nee to declare house obj as const.                                 
    cout<<"The house is "<<house.getColor()<<" and has "
        <<house.getNumStories() << " stories and " 
        <<house.getNumWindows() <<" windows."<<endl; 
}


