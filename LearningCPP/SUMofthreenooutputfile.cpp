#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Declaration of values
    int x = 10;
    int y = 20;
    int z = 30;
    
    // Calculate the sum of the three integers
    int sum = x + y + z;
    
    // Create and open an output file
    ofstream outfile("output.txt");
     {
        // Write the result to the file
        outfile << "The sum is: " << sum << endl;
        
        // Close the file
        outfile.close();
    }
    
	cout<<"Sum has been directed to an Output file" <<endl;
    return 0;
}

