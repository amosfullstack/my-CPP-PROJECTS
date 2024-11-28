#include <iostream>
#include <fstream>
using namespace std;

void andika(){
	int a, b, c;
	ofstream faili;
	cout<<"ingiza namba ya kwanza a: ";
	cin>>a;
	cout<<endl;
	cout<<"Namba ya kwanza imeingia kwenye a" <<endl;
	cout<<"iniza namba kwenye b ";
	cin>>b;
	cout<<endl;
	cout<<"Namba ya ppili imeingia kwenye b" <<endl;
	c= a + b;
	faili.open("FDSK.txt");
	faili<<a <<" " <<b <<" " <<c <<" " <<endl;
	faili<<"Jumla ni: " <<c <<endl;
	faili.close();
}

void soma(){
	int a, b, c;
	ifstream faili;
	faili.open("FDSK.txt");
	faili>>a;
	faili>>b;
	faili>>c;
	cout<<"Namba ulizo input ni: ";
	cout<<a <<" " <<b <<endl;
	cout<<"Jumla yake ni: " <<c <<endl;
		faili.close();
}

int main(){
	andika();
	soma();
	return 0;
}
