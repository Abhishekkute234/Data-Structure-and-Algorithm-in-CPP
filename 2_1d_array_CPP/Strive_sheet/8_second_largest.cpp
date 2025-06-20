#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        
    if (arr.size()<2) return -1;
        
      int largest = arr[0];
      int secondlargest = arr[-1];
      
      for(int i=0;i<arr.size();i++){
          if(arr[i]>largest){
              secondlargest=largest;
              largest = arr[i];
          }
          else if (arr[i] > secondlargest && arr[i] != largest) {
                secondlargest = arr[i];
            }
            
              
          
      }
      
      
      return secondlargest;
        
    }
};