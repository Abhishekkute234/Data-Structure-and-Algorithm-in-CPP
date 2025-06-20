#include<iostream>

#include<vector>
using namespace std ;

class Solution {
  public:
      void sortColors(vector<int>& nums) {
          
  int low = 0, mid = 0, high = nums.size() - 1;
  
      while (mid <= high) {
          if (nums[mid] == 0) {
              swap(nums[low], nums[mid]); // Move 0 to the low position
              low++;
              mid++;
          } else if (nums[mid] == 1) {
              mid++; // Leave 1 in the middle
          } else { // nums[mid] == 2
              swap(nums[mid], nums[high]); // Move 2 to the high position
              high--; // Do not increment mid yet, as we need to check the new value at mid
          }
      }
      }
  };