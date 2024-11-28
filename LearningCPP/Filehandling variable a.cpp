#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream variable_a;
	int a;
	cin>>a;
	int b;
	cin>>b;
	int c = a + b;
	variable_a.open("database.txt");
	variable_a<<a;
	variable_a<<b;
	variable_a<<c;
	cout<<"The content has been written to the input file" <<endl;
	variable_a.close();
	
	ifstream variable_b("database.txt");
	variable_b>>a;
	variable_b>>b;
	cout<<"The content have been written to the output file";
	variable_b.close();
	
	cout<<variable_b;
	
	
	return 0;
}
