#include <iostream>
using namespace std;
int min_index;
int main(){
	int my_array[]={ 12,34,12,43,54,65,23,65,23,654,42,54,657,6,34,23,54,23};
	int n = sizeof(my_array)/sizeof(my_array[0]);
	
	for(int i=0; i<n-1; i++){
		int min_index=i;
		for(int j=i+1; j<n; j++){
			if(my_array[j]<my_array[min_index]){
				min_index=j;
			}
		}
		  swap(my_array[i],my_array[min_index]);
	}
	
   
    
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
    	cout<<my_array[i] <<" ";
	}
    
	return 0;}
