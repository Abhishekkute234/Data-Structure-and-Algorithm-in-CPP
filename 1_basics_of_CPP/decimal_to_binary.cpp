// decimal to binary

#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }

    int binaryNum[32]; // Assuming 32-bit binary representation
    int i = 0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
}

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    
    cout << "Binary representation: ";
    decimalToBinary(decimalNumber);
    
    return 0;
}