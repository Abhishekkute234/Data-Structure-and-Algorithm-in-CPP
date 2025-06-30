
// double pointer
#include <iostream>
using namespace std;

void update(int **p)
{
    p = p + 1;         // no change
    int *p2 = *p2 + 1; // value of p chnages
    *p = *p + 1;
    **p = **p + 1;
}
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    cout << "the value of p is " << p << "\n";
    cout << "the value of &p is " << &p << "\n";
    cout << "the value of *p is " << *p << "\n";

    cout << "the value of p2 is " << p2 << "\n";
    cout << "the value of &p2is " << &p2 << "\n";
    cout << "the value of *p2 is " << *p2 << "\n";
    cout << "the value of **p2 is " << **p2 << "\n";

    cout << "the value of i is before " << i << "\n";
    cout << "the value of p is before " << p << "\n";
    cout << "the value of p2 is before " << p2 << "\n";
    update(p2);
    cout << "the value of i is after " << i << "\n";
    cout << "the value of p is after  " << p << "\n";
    cout << "the value of p2 is after " << p2 << "\n";
}
