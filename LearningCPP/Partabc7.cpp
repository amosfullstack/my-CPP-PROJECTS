#include <iostream>
#include <fstream>
using namespace std;

// Part (a): Prompt user for input
void JuliasNyerere() {
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
}

// Part (b): Write output to file
void MazindeJuu() {
    // Declaration of Values
    int x,y,z;
    // Calculate the sum of the three integers
    int sum = x + y + z;
    
    // Create an output file stream
    ofstream outFile("output.txt");
	 {
        outFile << "The sum of the numbers is: " << sum << endl;
        outFile.close();
        cout << "The result has been written to output.txt" << endl;
    }
}

// Part (c): Read input from file and write output to file
void MiramboAlmin() {
    // Declaration of Values
    int x, y, z;
    int sum=x+y+z;

    // Create an input file stream
    ifstream inFile("input.txt");
	 {
        inFile >> x >> y >> z;
        inFile.close();
    } 
}

int main() {
	
	MiramboAlmin();
	MazindeJuu();
	JuliasNyerere();
	
    

    return 0;
}

