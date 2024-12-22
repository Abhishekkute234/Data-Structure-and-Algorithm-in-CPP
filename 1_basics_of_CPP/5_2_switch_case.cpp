

    //  mini calculator 
// using for operations 

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"the value of a is "<<"\n";
    cin>>a;
    cout<<"the value of b is "<<"\n";
    cin>>b;
    
    char op;
    cout<<"Enter the operations you want to perform ";
    cin>>op;

    switch(op){
        
        case '+':cout<<"The addition of a nd b is :  "<<(a+b);
                break;   
        case '-':cout<<"The subtraction  of a nd b is :  "<<(a-b);
                break;   

         case '*':cout<<"The multiplication of a nd b is :  "<<(a*b);
                break;   
        case '/':
        cout<<"The division of a nd b is :  "<<(a/b);
                break;   

        default: cout<<"syntex error ";

    }

}