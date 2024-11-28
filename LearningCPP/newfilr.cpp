#include <iostream>
#include <fstream>
using namespace std;
int main(){
	//Create and open a file txt
	ofstream Myfile("Unyama.txt");
	
	//Write to a file 
	Myfile<<"File can be tricky, but it is fun enough!";
	
	//CLose file
	Myfile.close();
	
	
	//Read my file
	ifstream MyReadfile("Unyama.txt");
	Myfile.close();
	
	return 0;
}
