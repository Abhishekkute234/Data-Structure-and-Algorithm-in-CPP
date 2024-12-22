//--- >>>>>>>>>>>  encapsulation  <<<<<<<<<<<<<<--- 

// rapping up data memebers and functions
// fullly encapsulated--class all are private 

// advantege-> information hiding,code reuseability

#include <iostream>
using namespace std;
class student {
    string name;
    int age;
    double height;
    public:
    int getage(){
        return this->age;
    }


};
int main(){
    student first;
    cout<<"sab sahi cal raha hai"<<"\n";
}