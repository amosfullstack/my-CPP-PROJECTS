#include <iostream>
using namespace std;
int main(){
	int students;
	cout<<"Enter the number of students:" ;
	cin>>students;
	int marks[students];
	int sum=0;
	cout<<"Enter students marks: ";
	for(int i=0; i<10; i++){
		cin>>marks[i];
		if(marks[i]>=0){
			sum=sum+marks[i];
		}
		else{
			cout<<"Please enter the positive score!!";
		}
	}
	cout<<"The sum is: " <<sum <<endl;
	int average;
	average=sum/students;
	cout<<endl;
	cout<<"The average is: " <<average <<endl;
	if(average>=50){
		cout<<"Good Perfomance!!";
	}
	else{
		cout<<"Bad Perfomance!!";
	}
	
	return 0;
}
