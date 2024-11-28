#include <iostream>
#include <fstream>

int main() {
    // Open the input file
    std::ifstream fileOne("output.txt");

    // Check if the file is opened successfully
    if (!fileOne) {
        std::cerr << "Error opening input file!" << std::endl;
        return 1;
    }

    // Create a 3x1 array to store the numbers read from the file
    int array[3][1];

    // Read the numbers from the file into the array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 1; ++j) {
            fileOne >> array[i][j];
        }
    }

    // Close the input file
    fileOne.close();

    // Multiply each element of the array by 4 and output the result
    std::cout << "Result after multiplying each element by 4:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 1; ++j) {
            std::cout << array[i][j] * 4 << std::endl;
        }
    }

    return 0;
}

