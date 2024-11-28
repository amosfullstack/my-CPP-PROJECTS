#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Declaration of Values
    int x, y, z;

    // Prompt the user to input the numbers
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Enter the third number: ";
    cin >> z;
    
    // Calculate the sum of the three integers
    int sum = x + y + z;
    
    // Create an output file stream
    ofstream outFile("output.txt");
 {
        // Write the sum to the file
        outFile << "The sum of the numbers is: " << sum << endl;
        // Close the file
        outFile.close();
        cout << "The result has been written to output.txt" << endl;
    } 

    return 0;
}

