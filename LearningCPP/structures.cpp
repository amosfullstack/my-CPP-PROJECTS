#include <iostream>
using namespace std;
int main(){
	struct{
		int myNum;
		string myString;
		float mySalary;
	}myStructure1,myStructure2,myStructure3;
	
	//Assign the values to the members of the structure
	myStructure1.myNum=100;
	myStructure1.myString ="Amos";
	myStructure1.mySalary = 100000.50;
	myStructure3.mySalary=123.23;
	myStructure2.myString="Samwel";
	
	//Printing the members of the structur
	cout<<"The following are the members of the structure: " <<endl;
	cout<<myStructure1.myNum  <<endl;
    cout<<myStructure1.myString   <<endl;
	cout<<myStructure3.mySalary  <<endl;
	cout<<myStructure2.myString <<endl;
	
		return 0;
}
