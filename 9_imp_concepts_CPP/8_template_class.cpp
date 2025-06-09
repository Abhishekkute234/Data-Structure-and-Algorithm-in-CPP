// tempates are basicaaly use to define funtion or class for any variable or data type
#include <iostream>

// Template class for a Pair
template <typename T1, typename T2>
class Pair {
public:
    Pair(const T1& first, const T2& second) : first(first), second(second) {}

    void display() const {
        std::cout << "Pair: (" << first << ", " << second << ")" << std::endl;
    }

private:
    T1 first;
    T2 second;
};

int main() {
    // Creating instances of Pair with different data types
    Pair<int, double> intDoublePair(10, 3.14);
    Pair<std::string, char> strCharPair("Hello", 'A');

    // Displaying the pairs
    intDoublePair.display();
    strCharPair.display();

    return 0;
}
