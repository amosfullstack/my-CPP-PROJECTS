#include <iostream>
using namespace std;
int main(){
	int num;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	cout<<"The divisors of a given no are: ";
	for(int i=1; i<=num; i++){
		if(num%i==1){
			cout<<i <<" ";
		}
	}
	return 0;
}


