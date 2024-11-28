#include <iostream>
using namespace std;

int main() {
    // Declaration of Values
    float x, y;
    int z;

    // Prompt the user input numbers
    cout << "Enter the first number (float): ";
    cin >> x;
    cout << "Enter the second number (float): ";
    cin >> y;
    cout << "Enter the third number (integer): ";
    cin >> z;
    
    // Calculate the sum 
    float sum = x + y + z;
    
    // The output
    cout << "The sum of the numbers is: " << sum << endl;
    
    return 0;
}

