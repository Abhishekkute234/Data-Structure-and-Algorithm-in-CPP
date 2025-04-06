#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 12, 13}}; // 3x4 matrix
    // 3x4 = 12 elements

    // Row-wise printing
    cout << "Row-wise output:\n";
    for (int i = 0; i < 3; i++)
    { // Rows
        for (int j = 0; j < 4; j++)
        { // Columns
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nColumn-wise output:\n";
    // Column-wise printing (fixed)
    for (int j = 0; j < 4; j++)
    { // Columns first
        for (int i = 0; i < 3; i++)
        { // Then rows
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
