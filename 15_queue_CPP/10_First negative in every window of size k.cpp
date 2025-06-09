#include <iostream>
#include <queue>
#include <stack>

using namespace std;
class Solution {
  public:
      vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
          deque<int> dq;
          vector<int> ans;
  
          // Process first k elements
          for (int i = 0; i < k; i++) {
              if (arr[i] < 0) {
                  dq.push_back(i);
              }
          }
  
          // Store answer for the first k-size window
          ans.push_back(dq.empty() ? 0 : arr[dq.front()]);
  
          // Process the remaining elements
          for (int i = k; i < arr.size(); i++) {
              // Remove elements that are out of this window
              if (!dq.empty() && i - dq.front() >= k) {
                  dq.pop_front();
              }
  
              // Add new element if it's negative
              if (arr[i] < 0) {
                  dq.push_back(i);
              }
  
              // Store the result for the current window
              ans.push_back(dq.empty() ? 0 : arr[dq.front()]);
          }
          
          return ans;
      }
  };
  