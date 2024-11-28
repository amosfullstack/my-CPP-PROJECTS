#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Openiing a file named "output.txt" for writing
    ofstream myFile("output.txt");

    // Checking if the file is opened successfully
    if (!myFile) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculating the sum of the two numbers
    int sum = num1 + num2;

    // Write the sum to the file
    myFile << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    // Close the file
    myFile.close();

    std::cout << "Result has been written to file successfully!" << std::endl;

    return 0;
}

