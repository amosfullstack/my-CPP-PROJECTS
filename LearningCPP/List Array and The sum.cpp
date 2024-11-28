#include <Iostream>
using namespace std;
int main(){
	int list[4]={10,20,30,40};
	int sum=0;
	cout<<"The Array Elements are ";
	for(int i=0; i<4; i++){
		
		cout<<list[i] <<" ";
		sum=sum+list[i];
	}
	    cout<<endl;
		cout<<"The sum of Array Elements is: ";
		cout<<sum;
	return 0;
}
