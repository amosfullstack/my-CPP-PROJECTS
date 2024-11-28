#include <iostream>
#include <fstream>
using namespace std;

// Part (a): Prompt user for input
void MiramboAlmi() {
    // Declaration of Values
    float x, y;
    int z;

    // Prompt the user to input the numbers
    cout << "Enter the first float number: ";
    cin >> x;
    cout << "Enter the second float number: ";
    cin >> y;
    cout << "Enter the integer number: ";
    cin >> z;
    
    // Calculate the sum of the three numbers
    float sum = x + y + z;
}

// Part (b): Write output to file
void MazindeJuu() {
    // Declaration of Values
    float x, y;
    int z;
    
    
    // Calculate the sum of the three numbers
    float sum = x + y + z;
    
    // Create an output file stream
    ofstream outFile("output.txt");
	 {
        outFile << "The sum of the numbers is: " << sum << endl;
        outFile.close();
        cout << "The result has been written to output.txt" << endl;
    }
}

// Part (c): Read input from file and write output to file
void JuliasNyerere() {
    // Declaration of Values
    float x, y;
    int z;

    // Create an input file stream
    ifstream inFile("input.txt");
	 {
        inFile >> x >> y >> z;
        inFile.close();
    } 
}

int main() {
	
	MiramboAlmi();
	MazindeJuu();
	JuliasNyerere();
	
    return 0;
}

