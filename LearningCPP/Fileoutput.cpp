#include <iostream>
#include <fstream>
using namespace std;
int main (){
	ofstream myFile;
	int num1, num2;
	cout<<"Enter the first number: " <<endl;
	cin>>num1; 
	cout<<endl;
	cout<<"Enter the second number: " <<endl;
	cin>>num2;
	cout<<endl;
	
	int sum= num1+num2;
	myFile.open("output.txt");

    //write the sum to the file
    myFile<<"The sum is: " <<sum <<endl;
    myFile.close();
    cout<<"Result has been written to file successfully!" <<endl;
    
    ifstream myFile2;
    cout<<"The sum is: " <<sum <<endl;
    myFile.close();
    
	
return 0;	
	
}
