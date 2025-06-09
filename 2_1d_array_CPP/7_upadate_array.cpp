
// here the array get uptated
// due to change in function value 

#include <iostream>
using namespace std;
void update(int array[],int n){
    // uptating array
    array[0]=120;

    cout<<"inside the function"<<"\n";
    for(int i=0;i<3;i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    cout<<"going back to main functionn "<<"\n";
}
int main(){
    int arr[3]={1,2,3};
    update(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}

// here can't get change because function is after the main function 
#include <iostream>
using namespace std;
void update(int array[],int n){
    // uptating array
    array[0]=120;

    cout<<"inside the function"<<"\n";
    for(int i=0;i<3;i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    cout<<"going back to main functionn "<<"\n";
}
int main(){
    int arr[3]={1,2,3};
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    update(arr,3);
}
