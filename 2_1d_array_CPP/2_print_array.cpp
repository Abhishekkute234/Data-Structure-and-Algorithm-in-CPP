#include <iostream>
using namespace std;
int main()
{
    int num[15];

    cout << "value at zero index \n"
         << num[0] << "\n";
    // here  the value printed is garbage value

    int sec[3] = {5, 7, 11};
    cout << "value at second index is \n"
         << sec[2] << "\n";

    return 0;
}