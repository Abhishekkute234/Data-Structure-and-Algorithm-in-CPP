
//  FOR LOOP 

// the cube of the number 
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int ans=1;

    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    cout<<"answer of cube is "<<ans<<"\n";
}