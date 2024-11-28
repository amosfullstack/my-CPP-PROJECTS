#include <iostream>
using namespace std;

int count=2;

void fibonacci(int a,int b){
    if(count<19){
        int newFib=a+b;
        cout<<newFib <<endl;
        count++;
        fibonacci(b,newFib);
    }
    else{
        return;
    }
}
int main(){
    cout<<"0" <<endl;
    cout<<"1" <<endl;
    fibonacci(0,1);
    return 0;
}