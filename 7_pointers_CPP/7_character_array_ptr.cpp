
// character arrays  
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,3,5,6,7};
    char ch[6]="abhis";

    cout<<arr<<"\n";//it print address
    cout<<ch<<"\n";//it print the content  (abhis) 

    char *c=&ch[0];
    cout<< c <<"\n";//print the entire string 

    char temp='z';
    char *p=&temp;
    cout<<p<<"\n";
}  