
// row sum
#include <iostream>
using namespace std;

int largestrow_sum(int arr[3][4], int row, int col)
{
  int maxi = INT16_MIN;
  for (int row = 0; row < 3; row++)
  {
    int sum = 0;
    for (int col = 0; col < 4; col++)
    {
      sum += arr[row][col];
    }
    if (sum > maxi)
    {
      maxi = sum;
    }
  }
  return maxi;
}

int main()
{
  // inpute row wise
  int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  cout << "sum of the rows are " << largestrow_sum(arr, 3, 4);
}