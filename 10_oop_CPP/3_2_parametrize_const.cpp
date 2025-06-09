

// parametrize constructore 

// this key word--it stores the addrses of current keyword 
// the address of hero and default constructore is same 
#include <iostream>
using namespace std;
class hero{
    int health;
    public:
    char level;

    hero(){

        cout<<"defalut contructore ";
    }

    hero(int health){
        this-> health=health;//to put the line 13 to 
        cout<<"this -> "<<this<<"\n";
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
    cout<<"addrerss of ramesh "<<&ramesh<<"\n";
    // dynamic
    hero *s=new hero;//
    
}