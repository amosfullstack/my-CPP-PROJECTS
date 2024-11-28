#include <iostream>
using namespace std;
int main(){
	string myRelatives[10];
	
	cout<<"Enter the Names of your ten relatives: " <<endl;
	for(int i=0; i<10; i++){
		cin>>myRelatives[i]; cout<<endl;
	}
	
	cout<<"The Names of My Ten Relatives are: " <<endl;
	for(int j=0; j<10; j++){
		cout<<myRelatives[j] <<endl;
	}
	
	return 0;
}
