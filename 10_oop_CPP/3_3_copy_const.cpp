

// copy constructore 
#include <iostream>
using namespace std;
class hero{
    int health;
    public:
    char level;
    //simple constructore 
    hero(){

        cout<<"defalut contructore "<<"\n";
    }
    // paratmetrize constructore 
    hero(int health,char level){
        this-> health=health;//to put the line 13 to 
        this->level=level;
    }
    //copy constructore
    hero(hero& temp){
        cout<<"copy constructre call "<<"\n";
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<"health "<<this->health<<"\n";
        cout<<"level "<<this->level<<"\n";
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
    hero suresh(70,'c');
    suresh.print();
    hero ritesh(suresh);
    ritesh.print();
    // this means
    // ritesh.health=suresh.health
    // ritesh.level=suresh.level
}
