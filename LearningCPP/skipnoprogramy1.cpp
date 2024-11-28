#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the array size: ";
	cin>>num;
	int arr[num];
	int i=0;
	cout<<"Enter the array elements: ";
	while(i<num){
		cin>>arr[i];
		i++;
	}
	
int j=0;
cout<<"Reading the Array data: ";
while(j<7){
	if((j+1)%2==0){continue;
	}
	else{
		cout<<arr[j];
	}
	j++;
} 
	return 0;
}
