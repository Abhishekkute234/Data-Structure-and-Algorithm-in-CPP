////// Global variables ./////////

// caution dont use it 


#include <iostream>
using namespace std;

int score =15;//global variable

//we use it in any function 
void a(int i){
    cout<<i<<"\n";
    cout<<score<<" in a "<<"\n";

}
void b(int i){
    cout<<i<<"\n";
        cout<<score<<" in b "<<"\n";

}
int main(){
    int i=5;//local variable 
    cout<<score<<" in main"<<"\n";
    a(i);
    b(i);
} 