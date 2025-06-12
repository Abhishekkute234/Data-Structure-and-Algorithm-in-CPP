#include <iostream>
using namespace std;

// no reference variable
void update_1(int n)
{
    n++;
}

// reference variable
void update_2(int &n)
{
    n++;
}

int main()
{
    int n = 5;
    cout << "Before " << n << "\n";

    update_1(n);
    cout << "after 1st time  " << n << "\n"; // no change

    update_2(n);
    cout << "after 2nd time " << n << "\n"; // change
}
