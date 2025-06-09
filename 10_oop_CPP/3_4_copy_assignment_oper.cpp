
// copy assignment operratore 
#include <iostream>
using namespace std;
class hero{
    int health;
    public:
    char *name;
    char level;
    //simple constyructore 
    hero(){
        cout<<"defalut contructore "<<"\n";
        name=new char[100];

    }
    // paratmetrize constructore 
    hero(int health,char level){// copy assignment opeartore
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

    void setname(char name[]){
        this->name=name;
    }
};

int main(){
    hero hero1;

    hero1.sethealth(12);
    hero1.setlevel('n');
    char name[8] = "abhi";
    hero1.setname(name);

    hero hero2;
    hero1=hero2;
    hero1.print();
    hero2.print();

}