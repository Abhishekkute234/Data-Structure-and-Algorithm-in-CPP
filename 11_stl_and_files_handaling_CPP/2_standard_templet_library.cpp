// standard templet library 

// >>>>>>>>> Library <<<<<<<<<

// -------->>>>>>  Array    <<<<<<---------
#include<iostream>
using namespace std;
#include<array>
int main(){
    int arr[3]={1,2,3};

    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<"\n";
    }

    cout<<"Enter second element "<<a.at(2)<<"\n";//at operator
    cout<<"Empty or not "<<a.empty()<<"\n";
    // if "0" then false 
    //if "1"  then true 
    cout<<"First element "<<a.front()<<"\n";//ist element 
    cout<<"Last  element "<<a.back()<<"\n";// last element
}

// ------>>>> vector  <<<<<<---------

#include<iostream>
using namespace std;
#include<vector>
int main(){
    //capacity get double when the size increases 

    vector<int> v;//the size of the new vector is always zero
    int size=v.capacity();//  .capacity
    cout<<"Size "<<v.capacity()<<"\n";

    v.push_back(1);//to add any element
    cout<<"Size "<<v.capacity()<<"\n";// 1

    v.push_back(2);
    cout<<"Size "<<v.capacity()<<"\n";// 2
    
    v.push_back(2);
    cout<<"Size "<<v.capacity()<<"\n";// 4

    // capacity means how many we can add and 
    //  size show number of elements

    cout<<"Enter second element "<<v.at(2)<<"\n";//at operator

    v.pop_back();  /// it remove the last value 
    cout<<"value after pop back \n";
    for(int i:v){
        cout<<i<<" \n";
    }

v.clear();  /// it remove the last value 
    cout<<"value after clear \n";
    for(int i:v){
        cout<<i<<" \n";
    }

}


#include<iostream>
using namespace std;
#include<vector>
int main(){

    vector<int> a(5,1);//it print 5 times n 
    cout<<"print a "<<"\n";
    for(int i:a){
        cout<<i<<" \n";

    vector<int> last(a);
    cout<<"print last "<<"\n";
    for(int i:last){
        cout<<i<<" \n";
    }
}
}


// ------>>>> deque  <<<<<<---------
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;

    d.push_back(1);//remove 1st element 
    d.push_front(2);

    cout<<"Print 1st index element is "<<d.at(1)<<"\n";

    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<"\n";

    // d.pop_back();// last element 
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<"\n";

    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<"\n";
    cout<<"Front element is "<<d.front()<<"\n";
    cout<<"Back element is "<<d.back()<<"\n";
    // erase function 
    cout<<"Befour errase "<<d.size()<<"\n";
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<"\n";
}

// ------>>>> List   <<<<<<---------
#include<iostream>
#include<list>//sorted
using namespace std;
int main(){ 
    list<int> l;

    l.push_back(1);
    l.push_front(2);
    
    for(int  i:l){
        cout<<i<<"\n";
    }
    cout<<"\n";


    l.erase(l.begin());
    cout<<"after erase"<<"\n";
    for(int  i:l){
        cout<<i<<"\n";
    }
}

// ------>>>> Stack   <<<<<<---------
//  plate and book example
#include<iostream>
#include<stack>
using namespace std;
int main(){ 
    stack<string> s;

    s.push("Abhishek");
    s.push("Anil");
    s.push("Kute");

    cout<<"Top element "<<s.top()<<"\n";
    //jo sabse end me ajyega wo sabse pehele ayega

    s.pop();
    cout<<"Top element "<<s.top()<<"\n";
}

// ------>>>> Queue  <<<<<<---------
// line me jo pehele lgata hai uski pehele bari aati hai
#include<iostream>
#include<queue>

using namespace std;
int main(){ 

    queue<string> q;

    q.push("love");
    q.push("Abhishek");
    q.push("Kute");

    cout<<"First element "<<q.front()<<"\n";
    q.pop();//it remove the 1st element 
    cout<<"First element "<<q.front()<<"\n";

}

// ------>>>>Priority Queue  <<<<<<-------

// 1st always print from max to minimum 
#include<iostream>
#include<queue>
using namespace std;
int main(){ 
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int> > mini;
    //from maximum to minimum
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n=maxi.size();

    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<"\n";
    // from minimum to maximum
    mini.push(5);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    int m=mini.size();

    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<"\n";
}

// ------>>>> Set   <<<<<<-------
// we cant modify or repet the element inside the set
// we can just remove or add element in the set
#include<iostream>
#include<set>
using namespace std;
int main(){ 
    set<int> s;

    s.insert(5);
    s.insert(9);
    s.insert(4);
    s.insert(3);

    for(int i:s){
        cout<<i<<" ";
    }cout<<"\n";

    s.erase(s.begin());
    for(int i:s){
        cout<<i<<" ";
    }cout<<"\n";
    cout<<"5 is presenet"<<s.count(5)<<"\n";

    set::<int>::iterator itr=s.find(5);
    cout<<"Value presnt at itr"<<*itr<<"\n";
}

   // ------>>>> Map <<<<<<-------

// in map the data in store in the key value 
// one key always point one value 
// sometime value should be same/ or same point but the name is always different 

#include<iostream>
#include<map>//sorted 
using namespace std;
int main(){ 
    map<int,string> m;

    m[1]="bapper";
    m[13]="kumar";
    m[2]="love";
    m.insert({5,"bheem"});//to insert any thing
    //here m is the key and the babber is the value 
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<"\n";//here 1st and second represnt the int and string
    }cout<<"\n";

    cout<<"finding 13 "<<m.count(13)<<"\n";
}  


////////////////////// Algorithums ////////////////////////
#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    cout<<"find 6 "<<binary_search(v.begin(),v.end(),6)<<"\n";

    cout<<"Lower bound"<<lower_bound(v.begin(),v.end(),9)-v.begin()<<"\n";
    cout<<"upper bound"<<upper_bound(v.begin(),v.end(),1)-v.begin()<<"\n";

    int a=3;
    int b=5;
    cout<<"max "<<max(a,b)<<"\n";
    cout<<"min "<<min(a,b)<<"\n";

    swap(a,b);
    cout<<" a = "<<a<<"\n";
    cout<<" b = "<<b<<"\n";

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<"string "<<s<<"\n";

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<"\n";
    for(int j:v){
        cout<<j<<" ";
    }

    sort(v.begin(),v.begin()+1,v.end());
    cout<<"after sort"<<"\n";
    for(int k:v){
        cout<<k<<" ";
    }
}
