#include <iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int newFib;
    cout<<a <<endl;
    cout<<b <<endl;
    for(int i=0; i<18; i++){
   newFib=a+b;
   cout<<newFib <<endl;
   a=b;
   b=newFib;
}
    
    return 0;
}