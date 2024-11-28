#include <iostream>
using namespace std;
int main(){
	
	//QN 1 declaration of variables
	int amo;
	int sam;
	char amos;
	
	//qn 2 input data in variables using = operator
	amo=3;
	sam=4;
	amos= 'G';
	
cout<<"Output from  assigned by operator: ";
cout<<amo  <<" "  <<sam <<" "  <<amos;

cout<<endl;
	
	//qn3 using input stream to input data in variables
	cout<<"Enter the interger values in amo and sam: ";
	cin>>amo;
	cin>>sam ;
	
	cout<<"Enter character value in amos: ";
	cin>>amos;
	
	cout<<"Output frm the input stream: ";
	cout<<amo <<" "  <<sam  <<" "  <<amos;
	
	return 0;
}
