#include<iostream>
#include<vector>
using namespace std ;


void sort(vector<int> arr){
  int low =0 ; int mid =0 ;int high = arr.size()-1;
  for(int i=0 ;i<arr.size();i++){
    if(arr[i]== 0){
       arr[low]=0 ;
       low++;
       mid++ ;


    }
    else if(arr[i]==2){
      arr[high]=2;
      high--;

    }
    else{
      arr[i]++;
      mid++;


    }
  }
}

int main (){
 vector< int> arr= {1,0,0,2,0,1,0,1,0,2,1,0,1,1,0,2,2,0};

}