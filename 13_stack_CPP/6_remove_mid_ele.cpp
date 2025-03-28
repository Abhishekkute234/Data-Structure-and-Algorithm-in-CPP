// remove middle element 
#include<iostream>
#include<stack>
using namespace std;
class Solution {
    public:
      // Helper function to remove the middle element
      void deleteMiddleHelper(stack<int>& s, int count, int mid) {
          if (count == mid) {
              s.pop(); // Remove the middle element
              return;
          }
          
          int temp = s.top();
          s.pop();
          deleteMiddleHelper(s, count + 1, mid);
          s.push(temp); // Push the elements back except the middle one
      }
  
      void deleteMid(stack<int>& s) {
          if (s.empty()) return;
  
          int mid = s.size() / 2;
          deleteMiddleHelper(s, 0, mid);
      }
  };
  
