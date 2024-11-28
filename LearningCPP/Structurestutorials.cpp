#include <iostream>
#include <string>
using namespace std;

struct Employee{
	char Name[100];
	int Age;
	double Salary;
};
int main(){
	
	Employee E1;
	cout<<"Enter the Employee details: " <<endl;
	cout<<"Enter Employee name: " <<endl;
	cin.getline(E1.Name,100);
	cout<<"Enter the Employee Age: "<<endl;
	cin>>E1.Age;
	cout<<"Enter the Employee Salary: " <<endl;
	cin>>E1.Salary;
	
	cout<<"Employee details are as follows: " <<endl;
	cout<<"Employee Name: " <<E1.Name <<endl;
	cout<<"Employee Age: " <<E1.Age <<endl;
	cout<<"Employee Salary: " <<E1.Salary <<endl;
	
	return 0;
}
