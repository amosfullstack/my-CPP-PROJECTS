#include <iostream>
using namespace std;
int main(){
	int noDays;
	int dailySales;
	int totalSales=0.0;
	cout<<"Enter the number of days: ";
	cin>>noDays;
	int i=1;
	while(i<=noDays){
		cout<<"Enter Sales for Day " <<i <<":";
		cin>>dailySales;
		totalSales=totalSales+dailySales;
		i++;
	}
	cout<<"The total sales is: ";
	cout<<totalSales;
	
	return 0;
}
