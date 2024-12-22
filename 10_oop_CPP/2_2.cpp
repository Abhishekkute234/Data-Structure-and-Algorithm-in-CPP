
// the size of the whole class is define by its inetriore 
// data types 
// getter and setter -- to use private member in the class
#include <iostream>
using namespace std;
class hero{
    int health;
    public:
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
};

int main(){
    //static 
    hero a;
    a.sethealth(60);
    a.setlevel('a');
    cout<<"level is "<<a.level<<"\n";
    cout<<"health is "<<a.gethealth()<<"\n";
    hero *b=new hero;
    // the way to write a dynamic class
    b->sethealth(90);
    b->setlevel('n');
     


    cout<<"level is "<<b->level<<"\n";
    cout<<"health is "<<b->gethealth()<<"\n";

}