#include <iostream>
using namespace std;
int main(){
	int i=0;
	int j=0;
	int arr[3][4]={
		{2,3,4,5},
		{8,7,6,4},
		{5,3,3,4}
			};
			
			
		for(i=0; i<3; i++){
			for(j=0; j<4; j++){
				cout<<arr[i][j] <<" ";
			}
			
		cout<<endl;
		}
			
	return 0;
}
