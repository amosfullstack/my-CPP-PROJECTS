#include<iostream>
using namespace std;
int main(){
	int sum=0;
	for(int i=0; i<10; i++){
		if(i%2==0){
			sum = sum +i;
		}
	}
	
	cout<<"Jumla ya Namba ni: " <<sum;
	
	return 0;
}
