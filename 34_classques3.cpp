#include <iostream>

int findMissingElement(int arr[], int size) {
    // Calculate the expected sum of the sequence
    int expectedSum = (size + 1) * (size + 2) / 2;

    // Calculate the actual sum of the given elements
    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    // The difference is the missing element
    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 4, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingElement = findMissingElement(arr, size);

    std::cout << "Sample Output: " << missingElement << std::endl;

    return 0;
}
