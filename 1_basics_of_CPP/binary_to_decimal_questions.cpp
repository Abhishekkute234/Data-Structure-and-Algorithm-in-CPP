


// form binary to decimal 

#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int length = binary.length();

    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);
        }
    }

    return decimal;
}

int main() {
    string binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int decimalResult = binaryToDecimal(binaryNumber);
    cout << "Decimal representation: " << decimalResult << endl;

    return 0;
}


