#include <iostream>

// Function to perform a linear search on an array
int linearSearch(int arr[], int size, int target) {
    // Iterate over all elements of the array
    for (int i = 0; i < size; ++i) {
        // If the current element matches the target, return its index
        if (arr[i] == target) {
            return i; // Return the index where the target was found
        }
    }
    // If the loop completes without finding the target, return -1
    return -1;
}

int main() {
    int arr[] = {2, 7, 4, 9, 1, 8}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target;

    std::cout << "Enter the number you want to search for: ";
    std::cin >> target;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << "." << std::endl;
    } else {
        std::cout << "Element " << target << " was not found in the array." << std::endl;
    }

    return 0;
}
