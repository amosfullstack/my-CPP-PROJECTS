#include <iostream>
using namespace std;

int main() {
    // Defining  the array said with four integers
    int NumList[] = {10, 20, 30, 40};

    // Initialize the sum variable to 0 as it is for a for loop
    int sum = 0;

    // Calculate the sum of all elements in the array using a for loop
    for(int i = 0; i < 4; ++i) {
        sum=sum+ NumList[i];
    }

    // Printing the sum computed from the Array
    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}

