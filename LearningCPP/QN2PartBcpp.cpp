#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Declaration of Values
    float x, y;
    int z;

    // Prompt the user to input the numbers
    cout << "Enter the first number (float): ";
    cin >> x;
    cout << "Enter the second number (float): ";
    cin >> y;
    cout << "Enter the third number (integer): ";
    cin >> z;
    
    // Calculate the sum of the three values
    float sum = x + y + z;
    
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

