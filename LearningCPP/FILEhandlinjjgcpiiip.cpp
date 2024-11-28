#include <iostream>
#include <fstream>
using namespace std;
	void andika(){
	int a;
	int b;
	int c;
	ofstream myFile1;
	cout<<"Enter the first number in a: ";
	cin>>a; 
	cout<<endl;
	cout<<"The first number has successfully entered in a" <<endl;
	cout<<"Enter the second number in b: ";
	cin>>b;
	cout<<endl;
	cout<<"The second number has successfully enterd in b" <<endl;
	c= a+b;
	myFile1.open("FDSK.txt");
	myFile1<<"The sum is: " <<c <<endl;
	myFile1.close();
}
void soma(){
	int x, y, z;
	ifstream myFile1;
	myFile1.open("FDSK.txt");
	myFile1>>x;
	myFile1>>y;
	myFile1>>z;
	
	cout<<"The numbers you input are: ";
	cout<<x <<" " <<y <<" " <<endl;
	cout<<"The sum is: " <<z;
	myFile1.close();
}

int main(){
	andika();
	soma();
	return 0;
}
	
