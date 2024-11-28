#include <iostream>
using namespace std;

int main() {
    // Declaration of Values
    int x, y, z;

    // Prompt the user input numbers
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Enter the third number: ";
    cin >> z;
    
    // Calculate the sum of the three integers
    int sum = x + y + z;
    
    // The output
    cout << "The sum of the numbers is: " << sum << endl;
    
    return 0;
}

