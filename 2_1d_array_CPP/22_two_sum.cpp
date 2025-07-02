// using hashmap and sets

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    // second = tar - first

    // key is unique first is the valur and 2nd ca nbe repeat
    //         Input: nums = [2,7,11,15], target = 9
    // Output: [0,1]
    // EG take 1st element = 2 then 9-2 =7 therefore [0,1 ]index
    unordered_map<int, int> m;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
      int first = nums[i];
      int second = target - first;
      if (m.find(second) != m.end())
      {
        ans.push_back(i);
        ans.push_back(m[second]);
        break;
      }

      m[first] = i;
    }
    return ans;
  }
};