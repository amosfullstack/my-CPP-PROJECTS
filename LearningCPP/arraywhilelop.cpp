#include <iostream>
using namespace std;
int main(){
	int ages[4];
	int i =0;
	
	while(i<4){
		if(i==0){
			cout<<"Enter your age: ";
			//cin>>ages[0];
		}
		else if(i==1){
			cout<<"Enter your father's age: ";
			//cin>>ages[1];
		}
		else if(i==2){
			cout<<"Enter your mother's age: ";
			//cin>>ages[2];
		}
		else{
			cout<<"Enter number 12: ";
			//cin>>ages[3];
	   }
	   cin>>ages[i];
	   i++;
		
	}
	
	
	int j=0;
	cout<<"Reading the array data: ";
	while(j<4){
		cout<<ages[j]  <<" ";
		j++;
	}
	
	/*this question was in test one as the program to be written
	i failed it because i had in adequate knowledge on loops*/
	
	return 0;
}
