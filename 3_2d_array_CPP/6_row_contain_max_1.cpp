#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> &arr)
    {
        int maxOnes = 0;   // To store the max count of 1s
        int rowIndex = -1; // To store the row index with max 1s

        // Loop through each row
        for (int i = 0; i < arr.size(); i++)
        {
            int count = 0;

            // Count 1s in the current row
            for (int j = 0; j < arr[i].size(); j++)
            {
                if (arr[i][j] == 1)
                {
                    count++;
                }
            }

            // If this row has more 1s than previous rows, update rowIndex
            if (count > maxOnes)
            {
                maxOnes = count;
                rowIndex = i;
            }
        }

        return rowIndex; // Return the row with max 1s
    }
};

// Example Usage
int main()
{
    Solution sol;
    vector<vector<int>> arr = {
        {0, 0, 0, 1}, // 1 one
        {0, 1, 1, 1}, // 3 ones
        {1, 1, 1, 1}, // 4 ones (max)
        {0, 0, 0, 0}  // 0 ones
    };

    cout << "Row with max 1s: " << sol.rowWithMax1s(arr) << endl; // Output: 2
    return 0;
}
