#include <iostream>
using namespace std;
int main(){
	int sum=0;
	int i = 1;
	while(i<=0){
		if((i%3)==0){
			cout<<5+i;
		}
		else{
			cout<<sum;
			sum = sum + i;
		}
		i++;
	}
	cout<<sum;
	return 0;
}
