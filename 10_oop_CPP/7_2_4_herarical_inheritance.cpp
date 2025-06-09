// 4.hybride/ haracical
// one parents class inheriate more than one child class  
#include <iostream>
using namespace std;
class human{
    protected:
    int height;
    public:
    int weight;
    int age;

    public:
    int getage(){
        return this->age;
    }
    int setweight(int w){
        this->weight=w;
    }


};

class male:public human{
    public:
    string colour;
    void sleep(){
        cout<<"male sleeping"<<"\n";
    }
};

class female:public human{
    public:
    string colour;
    void sleep(){
        cout<<"female sleeping"<<"\n";
    }
};

int main(){
    male abhi;
    abhi.age=67;
    abhi.colour="white";
    abhi.sleep();
    cout<<"colur is "<<abhi.colour<<"\n";

    female she;
    she.sleep();

}