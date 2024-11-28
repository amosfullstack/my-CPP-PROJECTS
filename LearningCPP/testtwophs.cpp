#include <iostream>
using namespace std;
int main(){
	
	//QN 1 declaration of variables
	int amo=0;
	int sam=0;
	char amos='\0';
	
	//qn 2 input data in variables using = operator
	amo=3;
	sam=4;
	amos= 'G';
	
cout<<"Output from from assignrd operator: ";
cout<<amo  <<" "  <<sam <<" "  <<amos;

cout<<endl;
	
	//qn3 using input stream to input data in variables
	cout<<"Enter the interger values in amo and sam: ";
	cin>>amo >>sam ;
	
	cout<<"Enter character value in amos: ";
	cin>>amos;
	
	
	cout<<amo <<" "  <<sam  <<" "  <<amos;
	
	return 0;
}
