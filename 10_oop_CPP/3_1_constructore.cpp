
// --->>>>>> constructore <<<<<<-----
// when we create a class by defaul the constructore get call

// constructore get called when new object is created 
// default constructor
// it is always by dedfault crteated 
#include <iostream>
using namespace std;
class hero{
    int health;
    public:
    char level;

    hero(){
        cout<<"defalut contructore ";
    }

    
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
   // static
    hero ramesh;
    // dynamic
    hero *s=new hero;//
    
}