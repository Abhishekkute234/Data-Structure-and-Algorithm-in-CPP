// it act like cout
#include<iostream>
#include<fstream>
using namespace std;
//this claSS Ia the works in files with c++
// the useful classes in c++ are 
// 1. fstream
// 2. ifstream--->> derieved through to fstream
// 3. ofstream-->> derieved through to fstream
// output is store in smaple txt
int main(){
    string name="abhishek";
    // opening file in using constructore 
    ofstream out("sample.txt");
    out<<name;
    // the out put in written in the sample.txt file

}

// it act like cin
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string name="abhishek";
    string st2;
    // opening file in using constructore 
    ifstream in("sampleb.txt");
    getline(in ,st2);
    cout<<st2;
    return 0;

}
// read and write in one function 
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // transfer main file to txt file
    ofstream hout("sample,txt");
    cout<<"enter your name ";
    string name;
    cin>>name;

    hout<<"my name is "+name;
    hout.close();// we free it after trnsfering data
    ifstream hin("sample.txt");
    string content;
    hin>>content;
    cout<<"the content is this file is: "<<content;
    hin.close();

}


// another method to open and close the file
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream out;
    out.open("sample.txt");
    out<<"this is me \n";
    out<<"hi\n";
    out<<"im the problem\n";
    out.close();

    ifstream in;
    string s="abhi";
    in.open("sample.txt");
    
    while(in.eof()==0){
        getline(in,s);
        cout<<s<<"\n";
    }
    in.close();
}