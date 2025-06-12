#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0; // Edge case: empty array

        int index = 1; // Pointer for the next unique element
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            { // Check if the current element is unique
                nums[index] = nums[i];
                index++;
            }
        }
        return index; // Returns the new length
    }
};