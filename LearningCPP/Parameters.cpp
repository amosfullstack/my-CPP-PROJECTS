#include <iostream>
using namespace std;
void myFunction(string fname="Nganyirwa"){
	
	cout<<fname <<" Byabato" <<endl;
	
}

int main(){
	myFunction("Amos");
	myFunction("Alvin");
	myFunction("Adrian");
	myFunction("Mujuni");
	myFunction("Ebenezer");
	myFunction();
	return 0;
}
