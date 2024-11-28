#include <iostream>
using namespace std;
void BadiliValue(int &x, int &y){
	int z;
	z=x;
	x=y;
	y=z;
}int main(){
	int num1 =20;
	int num2 =30;
	cout<<"Before Swap: " <<num1 <<" " <<num2 <<endl;
	cout<<"After Swap: ";
		BadiliValue(num1,num2);
		cout<<num1 <<" " <<num2 <<endl;
	
	return 0;
}
