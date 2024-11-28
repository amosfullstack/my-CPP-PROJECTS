#include <iostream>
using namespace std;
int main (){
	//QN 7 declaring array os size 6
	int arr[6];
	
	//QN 8 using while loop to enter data in an array
	int i = 0;
	cout<<"Enter the array data: " <<endl;
	while(i<6){
		cin>>arr[i];
		i++;
	}
	
	//QN 9 reading data from array using for loop
	for(i=0; i<6; i++){
		cout<<arr[i] <<" ";
	}
	
	return 0;
}
