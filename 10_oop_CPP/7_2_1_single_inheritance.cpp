// >>>>>> type of inheritance <<<<<<<<<
// 1.single -> from one base class to one child class 
// eg.human --> male
// eg.animal -->dog
#include <iostream>
using namespace std;
class animal{
    public:
    int height;
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

class dog{

};

// 2. multilevel
// A to B and B to C
#include <iostream>
using namespace std;
class animal{
    public:
    int height;
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

class dog :public animal{

};
class germanshefard: public dog{

};