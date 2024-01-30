#include<iostream>

void moveZerosToEnd(int arr[], int size) {
    int nonZeroIndex = 0;

    // Traverse the array, move non-zeros to the front
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            std::swap(arr[nonZeroIndex++], arr[i]);
        }
    }
}

int main() {
    int arr[] = {12, 0, 13, 15, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    moveZerosToEnd(arr, size);

    std::cout << "Sample Output: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
