#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
// when we use unordered map thing are not print in order 
// inmap things are print in the orderes manner 

int main(){
// template
    unordered_map< string,int > m;


// ===insetion
    // 1
    pair<string ,int > p= make_pair("abhishek",10);
    m.insert(p);

    // 2
    pair<string,int>pair2("love",2);
    m.insert(pair2);

    // 3
    // creation
    m["rohan"]=1;
    // updation
    m["rohan"]=5;

// === searching
    cout<<m["love"]<<endl;
    cout<<m.at("rohan")<<endl;

// there is  difference in between them below 

    // here a new key get form get entry '0'
    cout<<m["unknown"]<<endl;


    //here access cannot found 
    cout<<m.at("unknown")<<endl;


// to find the size 
    cout<<"size of the map is "<<m.size();
    cout<<"\n";

// to find that is present or not

    // if key is present then 1 and if no then 0
    cout<<m.count("bro")<<endl;

// erase function-->>if your wan to remove anything 
    m.erase("love");
    cout<<"now after remove the love the size is : "<<m.size();



//(travelsal)
    // 1
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;

    }

    //2. itteratore
    unordered_map<string,int>::iterator it=m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }



    




}

