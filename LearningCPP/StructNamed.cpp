#include <iostream>
using namespace std;
int main(){
	
	//creating the named structures to use as my own data types
	struct students{
		string studentName;
		int regNo;
		int age;
		string Program;
	};
	
	//creating the variables from my own datatypes  created
	students Student1;
	Student1.studentName = "Amos";
	Student1.regNo = 2000;
	Student1.age = 23;
	Student1.Program = "Software";
	
	students Student2;
	Student2.studentName = "Gilly";
	Student2.regNo = 2004;
	Student2.age = 21;
	Student2.Program = "IS";
	
	//Out puts
	cout<<"The following are the Outputs of the Student1: " <<endl;
	cout<<Student1.studentName <<endl;
	cout<<Student1.regNo <<endl;
	cout<<Student1.age <<endl;
	cout<<Student1.Program <<endl;
	cout<<"\n";
	
	cout<<"The following are the output os Student2: " <<endl;
	cout<<Student2.studentName <<endl;
	cout<<Student2.regNo <<endl;
	cout<<Student2.age <<endl;
	cout<<Student2.Program <<endl;
	
	
}
