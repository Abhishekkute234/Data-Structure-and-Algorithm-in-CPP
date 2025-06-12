#include <iostream>
#include <vector>
using namespace std;

class Solution

{

public:
    vector<int> findUnion(vector<int> &arr1, vector<int> &arr2, int n, int m)
    {
        vector<int> unionArr; // Result array
        int i = 0, j = 0;

        while (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
            {
                // Avoid duplicate insertion
                if (unionArr.empty() || unionArr.back() != arr1[i])
                    unionArr.push_back(arr1[i]);
                i++;
            }
            else if (arr1[i] > arr2[j])
            {
                if (unionArr.empty() || unionArr.back() != arr2[j])
                    unionArr.push_back(arr2[j]);
                j++;
            }
            else
            { // arr1[i] == arr2[j]
                if (unionArr.empty() || unionArr.back() != arr1[i])
                    unionArr.push_back(arr1[i]);
                i++;
                j++;
            }
        }

        // Add remaining elements from arr1
        while (i < n)
        {
            if (unionArr.empty() || unionArr.back() != arr1[i])
                unionArr.push_back(arr1[i]);
            i++;
        }

        // Add remaining elements from arr2
        while (j < m)
        {
            if (unionArr.empty() || unionArr.back() != arr2[j])
                unionArr.push_back(arr2[j]);
            j++;
        }

        return unionArr;
    }
};
