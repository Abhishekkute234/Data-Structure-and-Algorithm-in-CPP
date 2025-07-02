#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

// nlogn +n2

class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {

    // 2 pointer approch
    // nums[i]+nums[j]+nums[k]=0

    // two pointer approch
    //  this is in the sorted form so that we can compiar the 1st and the last

    // STEP -1 sort the array

    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = 0; i < nums.size(); i++)
    {
      // nums[i]!=nums[j]!=nums[k]

      if (i > 0 && nums[i] == nums[i - 1])
        continue;

      int j = i + 1, k = n - 1;
      while (j < k)
      {
        int sum = nums[i] + nums[j] + nums[k];
        if (sum < 0)
        {
          j++;
        }
        else if (sum > 0)
        {
          k--;
        }
        else
        { // sum =0
          ans.push_back({nums[i], nums[j], nums[k]});
          j++;
          k--;
          while (j < k && nums[j] == nums[j - 1])
            j++;
        }
      }
    }
    return ans;
  }
};