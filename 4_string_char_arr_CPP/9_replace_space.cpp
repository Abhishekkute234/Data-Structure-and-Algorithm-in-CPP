// replace space by @40
#include<iostream>
using namespace std;

string replace(string &str){
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
              temp.push_back('4');
                temp.push_back('0');
        }

        else{
            temp.push_back(str[i]);
        }
    }
    return temp;

}
int main(){
    string name="my name is abhishek";
    cout<<name;
    cout<<endl;
    cout<<"after reverse "<<replace(name);
}