// to traverse a map we need iteratores
// vectore , linked list, map ,unordered map ,set,unordered set

// map store key value 
// set just stores key 

#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    unordered_map<string,int> ourmap;
    ourmap["abc1"]=1;
    ourmap["abc2"]=2;
    ourmap["abc3"]=3;
    ourmap["abc4"]=4;
    ourmap["abc5"]=5;
    ourmap["abc6"]=6;

    // an iteratore
    unordered_map<string,int>:: iterator it=ourmap.begin();
    while(it !=ourmap.end()){
        cout<<"key : "<<it->first<<" "<<"value is : "<<it->second<<endl;
        it++;
    }

}

