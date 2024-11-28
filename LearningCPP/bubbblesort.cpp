#include <iostream>
using namespace std;
int main(){
	
	int my_arr[]={10,23,13,43,12,43,54,12,534,89};
	int n= sizeof(my_arr)/sizeof(my_arr[0]);
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(my_arr[j]>my_arr[j+1]){
				int temp = my_arr[j];
				my_arr[j]= my_arr[j+1];
				my_arr[j+1]=temp;
			}
		}
	}
	
	cout<<"Sorted Array: ";
	for(int i=0; i<n; i++){
		cout<<my_arr[i] <<" ";
	}
	
	return 0;
}
