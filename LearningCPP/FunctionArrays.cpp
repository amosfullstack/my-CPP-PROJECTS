#include <iostream>
using namespace std;
void myFunction(int Numbers[5]){
    for(int i=0; i<5; i++ ){
		cout<<Numbers[i] <<" ";
	}
}
int main(){
	int Numbers[5]={12,13,14,15,16};
	myFunction(Numbers);
	return 0;
}
