 // User function template for C++
#include<iostream>
#include<queue>
using namespace std ;

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
    //   generate a max heap 
    // step 1 
    priority_queue<int> pq;
    for (int i=0 ;i<k;i++){
        pq.push(arr[i]);
    }
    
    // step  2:
    for (int i= k ;i<arr.size() ;i++){
        if(pq.top()>arr[i]){
            pq.pop();
            pq.push(arr[i]);
            
        }
    }
    int ans = pq.top();
    return ans ;
    
    
    }
};
