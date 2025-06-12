#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;    // Current count of consecutive 1s
        int maxCount = 0; // Maximum count found

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;                         // Increase count of consecutive 1s
                maxCount = max(maxCount, count); // Update max if needed
            }
            else
            {
                count = 0; // Reset count when a 0 is found
            }
        }

        return maxCount;
    }
};
