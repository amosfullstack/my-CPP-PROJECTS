#include <iostream>
using namespace std;

int main() {
    // Declaration of array of five intergers
    int Numbers[5];

    // Telling the user to  enter five intergers
    cout << "Enter five integers:" << endl;
    for(int i = 0; i < 5; ++i) {
        cin >> Numbers[i];
    }

    // Initialize the largest variable
    int largest = Numbers[0];

    // Find the largest number in the array
    for(int i = 1; i < 5; ++i) {
        if(Numbers[i] > largest) {
            largest = Numbers[i];
        }
    }

    // Print the largest number on the screen
    cout << "The largest number in the array is: " << largest << endl;

    return 0;
}

