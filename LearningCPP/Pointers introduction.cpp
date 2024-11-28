#include <iostream>
using namespace std;
int main(){
	int y, *x;
	cout<<"Enter an interger: " <<endl;
	cin>>y;
	x=&y;
	cout<<"Accessing the data in y using identifier y: ";
	cout<<y <<endl;
	cout<<"Accessing the data in Y using identifier *x: ";
	cout<<*x <<endl;
	cout<<"Looking into the variable x: ";
	cout<<x;
	
	
	return 0;
}
