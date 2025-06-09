#include <iostream>
#include<vector>

using namespace std;


class Solution {
  public:
      int largest(vector<int>& arr) {
          int max = arr[0]; // Initialize with the first element
          for (int i = 1; i < arr.size(); i++) { // Start from index 1
              if (arr[i] > max) {
                  max = arr[i]; // Update max if a larger element is found
              }
          }
          return max;
      }
  };
  