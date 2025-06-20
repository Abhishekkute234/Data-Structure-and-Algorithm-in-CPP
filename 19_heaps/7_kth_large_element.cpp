#include<iostream>
#include<queue>
using namespace std ;


class Solution {
  public:
      int findKthLargest(vector<int>& nums, int k) {
             // Min-heap to keep track of top k largest elements
          priority_queue<int, vector<int>, greater<int>> pq;
  
          for (int i = 0; i < nums.size(); i++) {
              pq.push(nums[i]);
              if (pq.size() > k) {
                  pq.pop();  // Remove the smallest so only k largest remain
              }
          }
  
          // The top element is the kth largest
          return pq.top();
      }
  };