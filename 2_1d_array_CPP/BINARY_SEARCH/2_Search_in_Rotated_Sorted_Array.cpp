// [0,1,2,4,5,6,7]
// 4,5,6,7,0,1,2].
#include<iostream>
#include<vector>
using namespace std ;

class Solution {
  public:
      int search(vector<int>& nums, int target) {
            int start  =  0 ;
          int end = nums.size() - 1;
  
          while (start <= end) {
              int mid = start + (end - start) / 2;
  
              if (nums[mid] == target) return mid;
  
              // Check if left half is sorted
              if (nums[start] <= nums[mid]) {
                  if (nums[start] <= target && target <= nums[mid]) {
                      end = mid - 1;
                  } else {
                      start = mid + 1;
                  }
              }
              // Right half is sorted
              else {
                  if (nums[mid] <= target && target <= nums[end]) {
                      start = mid + 1;
                  } else {
                      end = mid - 1;
                  }
              }
          }
  
          return -1; // Not found
      }
  };