#include <iostream>
#include <fstream>

int main() {
    // Open a file named "input.txt" for reading
    std::ifstream infile("input.txt");

    // Check if the file is opened successfully
    if (!infile) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    // Read numbers from the file and print them
    int number;
    while (infile >> number) {
        std::cout << "Number: " << number << std::endl;
    }

    // Close the file
    infile.close();

    return 0;
}

