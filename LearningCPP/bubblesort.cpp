#include <iostream>
using namespace std;

int main() {
    int my_array[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    // Bubble Sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (my_array[j] > my_array[j + 1]) {
                // Swap elements
                int temp = my_array[j];
                my_array[j] = my_array[j + 1];
                my_array[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;

    return 0;
}

