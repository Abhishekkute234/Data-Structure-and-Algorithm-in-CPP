#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int first = 0; // Pointer for zero position

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[first], nums[i]);
                first++;
            }
        }
    }
};
