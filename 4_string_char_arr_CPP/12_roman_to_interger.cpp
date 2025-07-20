#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
class Solution
{
public:
  int romanToInt(string s)
  {
    unordered_map<char, int> roman{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    int total = 0;
    int n = s.length();

    for (int i = 0; i < n; ++i)
    {
      int value = roman[s[i]];
      if (i + 1 < n && value < roman[s[i + 1]])
      {
        // Subtractive notation
        total -= value;
      }
      else
      {
        total += value;
      }
    }

    return total;
  }
};