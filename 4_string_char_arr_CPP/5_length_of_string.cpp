// character array
// -->>> one dimensional array
// it store single variable


// lenght of the string 
#include<iostream>
using namespace std;

int lenght(string s){
    int cnt=0;
    for(int i=0;i<s.length();i++){
        cnt++;
    }
    return cnt;
}


int main(){
    string name;
    getline(cin,name);
    cout<<"The string is : "<<name <<"\n";
    cout<<"Lenght of the string is : "<<lenght(name)<<"\n";
}