#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>  // Required for sort

using namespace std;


class Solution {
  public:
      int singleNumber(vector<int>& nums) {
          sort(nums.begin(),nums.end());
          // elemets upto too last 2nd 
          for(int i=1 ;i<nums.size();i+=2)
          {
              if (nums[i]!= nums[i-1]){
                  return nums[i-1];
              }
          }
          // last elemet 
          return nums[nums.size()-1];
      }
  };