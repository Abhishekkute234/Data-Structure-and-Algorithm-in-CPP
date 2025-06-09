
// getter and setter -- to use private member in the class
#include <iostream>
using namespace std;
class hero{
    // char name[100];
    int health;//remaining are private
    public://all the memebers below public are public 
    char level;
     
    int gethealth(){//getter 
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){//setter
        health=h;
    }

    void  setlevel(char ch){//setter
        level=ch;
    }
};//semicolon is important in the class 

int main(){
    hero ramesh;
    cout<<"ramesh health is  "<<ramesh.gethealth()<<"\n";
    ramesh.sethealth(70);
    cout<<"ramesh health is  "<<ramesh.gethealth()<<"\n";

    // ramesh.health=34;
    ramesh.level='f';
    // cout<<"health of ramesh is "<<ramesh.health<<"\n";
    cout<<"level of ramesh is "<<ramesh.level<<"\n";
}


