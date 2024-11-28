#include <iostream>
using namespace std;
int main(){
	int my_array[]={12,43,54,23,54,65,23,21};
	int n=sizeof(my_array)/sizeof(my_array[0]);
	
	for(int i=1; i<=n-1; i++){
		int current_value=my_array[i];
		int insert_index=i;
		
		for(int j=i-1; j>=0; j--){
			if(my_array[j]>current_value){
				insert_index=j;
			}
			else{
				break;
			}
		}
	}
	
	return 0;
}
