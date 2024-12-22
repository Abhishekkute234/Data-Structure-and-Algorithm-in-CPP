

// data types and variables
#include<iostream>
using namespace std;
int main(){
    int a=123;
    cout<< a <<endl;
    
    char b ='v';//only one character is written in it
    cout<< b<<endl;
    
    bool bl=true;//if true then 1 and if false then 0 is written 
    cout<< bl <<endl;
    
    float f=1.2;
    cout<< f<<endl;
    
    double d=1.23;
    cout<<d<< endl;
    
    int size =sizeof(a);
    cout<<"size of a is :"<<size<<endl;
    
    
}
// IN this problem the character is type caste into an integer


// operatores 
// +,-,*,/,=,>,<,>=,!=

#include <iostream>
using namespace std;
int main() {
    int a=2;
    int b=3;
     bool first=( a==b);
     cout<< first << endl;// no means zero 
     
     bool second=( a<b);
     cout<< second << endl;
     
     bool third=( a>b);
     cout<< third << endl;
     
     bool fifth=( a<=b);
     cout<< fifth << endl;
     

    return 0;
}