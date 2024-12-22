// 3.multipal inheritance
// from two to one or three to one 
#include <iostream>
using namespace std;
class animal{
    public:
   void bark(){
    cout<<"bark\n";
   }
};



class human{
    public:
    string colour;

    void speak(){
        cout<<"speaking\n";
    }
};

class hybride :public animal,public human{

};

int main(){
    hybride obj1;
    obj1.speak;
    obj1.bark;
}
