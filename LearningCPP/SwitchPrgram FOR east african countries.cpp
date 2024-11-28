#include <iostream>
using namespace std;
int main(){
	char CountyFirstLetter;
	cout<<"Enter the Countires First Letter: ";
	cin>>CountyFirstLetter;
	
	switch(CountyFirstLetter){
		case 'T':
			{
				cout<<"Tanzania";
				break;
			}
			
		case 'U':
			{
				cout<<"Uganda";
				break;
			}
			
		case 'K':
			{
				cout<<"Kenya";
				break;
			}
			
		case 'B':
			{
				cout<<"Burundi";
				break;
			}
			
	}
	return 0;
}
