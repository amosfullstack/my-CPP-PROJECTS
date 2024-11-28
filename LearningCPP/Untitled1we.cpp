#include <iostream>
using namespace std;
int main(){
	int x=50;
	int y=20;
	int *p1=&x;
	int *p2=&y;
	p1=p2;
	
	cout<<*p1 <<endl;
	return 0;
}
