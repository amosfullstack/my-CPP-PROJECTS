#include <iostream>
using namespace std;
int main(){
	string password;
	string confirmpwd;
	cout<<"Enter your new ARIS password:" ;
	cin>>password;
	cout<<endl;
	
	cout<<"Confirm your new ARIS password: ";
	cin>>confirmpwd;
	cout<<endl;
	
	if(password==confirmpwd){
		cout<<"Congratulations, Welcome to ARIS";
	}
	else{
		cout<<"The Passwords do not Match";
	}
	
	return 0;
}
