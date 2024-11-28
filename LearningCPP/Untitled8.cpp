#include <iostream>
using namespace std;
int main(){
	int y;
	int *x;
	cout<<"Enter integer in y: " <<endl;
	cin>>y;
	x=&y;
	cout<<"Accessing y using y: ";
	cout<<y <<endl;
	cout<<"Accessing y using pointer *x: ";
	cout<<*x <<endl;
	cout<<"Accesing the address of y: ";
	cout<<x <<endl;
	return 0;
}
