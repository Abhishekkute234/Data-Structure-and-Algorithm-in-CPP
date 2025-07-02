#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {

    // fisrt buy and then sell
    // max profite
    // buy = min and sell = max

    // we can be sort

    // approch - imagine all as the selling day and then go back and find teh lowest value

    int maxprofit = 0;
    int bestbuy = prices[0];

    // we cant take 1st value
    for (int i = 1; i < prices.size(); i++)
    {
      if (prices[i] >= bestbuy)
      {
        maxprofit = max(maxprofit, prices[i] - bestbuy);
      }
      bestbuy = min(bestbuy, prices[i]);
    }
    return maxprofit;
  }
};