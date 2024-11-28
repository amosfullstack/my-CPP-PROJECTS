#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and open an input file
    ifstream infile("input.txt");{
    
    // Read the values from the file
    int x, y, z;
    infile >> x >> y >> z;
    
    // Calculate the sum of the three integers
    int sum = x + y + z;
    
    // Create and open an output file
    ofstream outfile("output.txt");
    
    // Write the result to the file
    outfile << "The sum is: " << sum << endl;
    
    // Close the files
    infile.close();
    outfile.close();
    
    cout << "Sum has been directed to an Output file" << endl;
    return 0;
}
