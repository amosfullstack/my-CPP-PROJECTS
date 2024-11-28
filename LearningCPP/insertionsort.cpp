#include <iostream>

int main() {
    int my_array[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    // Insertion sort
    for (int i = 1; i < n; i++) {
        int current_value = my_array[i];  // Element to be inserted
        int insert_index = i;  // Initially assume the element stays at position i

        // Find the correct position to insert current_value
        for (int j = i - 1; j >= 0; j--) {
            if (my_array[j] > current_value) {
                insert_index = j;  // Update insert_index if current_value is smaller
            } else {
                break;  // Exit the loop when a smaller element is found
            }
        }

        // Shift elements to the right to make space for current_value
        for (int j = i; j > insert_index; j--) {
            my_array[j] = my_array[j - 1];
        }

        // Insert current_value at the correct position
        my_array[insert_index] = current_value;
    }

    // Output the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << my_array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

