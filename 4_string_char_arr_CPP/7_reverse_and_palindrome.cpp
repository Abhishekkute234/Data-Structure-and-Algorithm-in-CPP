
// lenght,palindrome and reverse of character array 
// cheack plaindrom and case sensitive so convert 
// alll character in lower or upper case


#include<iostream>
using namespace std;

// lower case
char lowerc(char ch){
    
    if(ch>='a'&& ch<='z'){
        return ch;
        
    }

    else{
        char temp=ch-'A'+'a';
    }
    
    
}
// reverse 
void reverse(char name[],int n){
    int st=0;
    int e=n-1;
    while(st<e){
        swap(name[st++],name[e--]);
    }
    
}
// lenght 
int lenght(char name[]){
    int cnt=0;
    for(int i=0;name[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}
// check palindrome 
bool palindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(name[s++]==name[e--]){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    char name[20];
    char s='A';
    cin>>name;
    int len=lenght(name);
    cout<<"The string before reverse : "<<name <<"\n";
    cout<<"Lenght of the string is : "<<len<<"\n";
    cout<<"to the lower case "<<lowerc(s)<<"\n";
    reverse(name,len);
    cout<<"The string after reverse : "<<name<<"\n";

    if(palindrome(name,len)){
        cout<<"is palindrome\n ";
    }

    else{
        cout<<"not a palindrome \n";
    }


}