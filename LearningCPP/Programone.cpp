#include <iostream>
using namespace std;
int main(){
	int a;
	char b;
	short c;
    long d;
    long long e;
    
    cout<<"Enter the values of a b c d and e: " <<endl;
    cin>> a  >>c >>d >>e;
    
    cout<<"Enter the value of character: ";
    cin>>b; 
    
    cout<<"The size of (int) is: "  <<sizeof(a) <<"bytes" <<endl;
     cout<<"\nThe size of (char) is: "  <<sizeof(b) <<"bytes\n";
      cout<<"The size of (short) is: "  <<sizeof(c) <<"bytes\n";
       cout<<"The size of (long) is: "  <<sizeof(d) <<"bytes\n";
        cout<<"\n\n\nThe size of (long long) is: "  <<sizeof(e) <<"bytes";
        
        return 0;
}
