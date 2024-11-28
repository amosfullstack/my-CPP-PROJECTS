#include <iostream>
using namespace std;
void swapNums(int &x, int &y){
	int z = x;
	x=y;
	y=z;
}
int main(){
	int firstNum=20;
	int secondNum=30;
	
	//Before swap
	cout<<"Before Swap: " <<endl;
	cout<<firstNum <<endl;
	cout<<secondNum <<endl;
	
	//After swap
	cout<<"After Swap: " <<endl;
	swapNums(firstNum,secondNum);
	cout<<firstNum <<endl;
	cout<<secondNum <<endl;
	
	return 0;
}
