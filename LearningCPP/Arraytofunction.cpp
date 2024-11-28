#include <iostream>
using namespace std;
void myFunction1(int amosMarks[8]){
	for(int i =0; i<8; i++){
		cin>>amosMarks[i];
	}
}
void myFunction2(int amosMarks[8]){
	for(int i=0; i<8; i++){
		cout<<amosMarks[i] <<" ";
	}
}
int main(){
	
	int amosMarks[8];
	
	myFunction1(amosMarks);
	myFunction2(amosMarks);
	
	return 0;
}
