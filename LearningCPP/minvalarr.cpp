#include <iostream>
using namespace std;
int main(){
    int my_arr[5]={23,4,34,2,9};
   int  minVal=my_arr[0];

    for(int i=0; i<5; i++){
         if(my_arr[i]<minVal){
            minVal=my_arr[i];
         }
    }
    cout<<"The minimum Value is:" <<minVal <<endl;
    return 0;
}