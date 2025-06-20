#include<iostream>

#include<vector>
using namespace std ;
class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {
        
        for(int i =0 ;i<arr.size();i++){
            if (arr[i]== k){
                return 1;
                
            }
        }
        return 0;

        // Your code here
    }
};
