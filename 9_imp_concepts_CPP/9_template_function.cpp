#include <iostream>
#include <vector>

template <typename T>
void selectionSort(std::vector<T>& array) {
    int n = array.size();

    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        // Find the index of the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; ++j) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            std::swap(array[i], array[minIndex]);
        }
    }
}

template <typename T>
void printArray(const std::vector<T>& array) {
    for (const auto& element : array) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Example with an integer array
    std::vector<int> intArray = {64, 25, 12, 22, 11};
    std::cout << "Original array: ";
    printArray(intArray);

    selectionSort(intArray);

    std::cout << "Sorted array: ";
    printArray(intArray);

    // Example with a double array
    std::vector<double> doubleArray = {5.5, 4.4, 3.3, 2.2, 1.1};
    std::cout << "Original array: ";
    printArray(doubleArray);

    selectionSort(doubleArray);

    std::cout << "Sorted array: ";
    printArray(doubleArray);

    return 0;
}
  