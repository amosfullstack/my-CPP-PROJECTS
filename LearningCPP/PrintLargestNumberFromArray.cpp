#include <iostream>
using namespace std;
int main(){
	int Numbers[5];
	cout<<"Enter five numbers: ";
	for(int i=0; i<5; i++){
		cin>>Numbers[i];
	}
	
	int Largest = Numbers[0];
	for(int i=0; i<5; i++){
		if(Numbers[i]>Largest){
			Largest=Numbers[i];
		}
	}
	cout<<"The Largest Number in an Array is: ";
	cout<<Largest;
	
}
