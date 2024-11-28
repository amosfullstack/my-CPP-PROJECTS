#include <iostream>
using namespace std;
int main(){
	int numberOfDays;
	double dailySales;
	double totalSales=0.0;
	
	cout<<"Enter the total number of days: ";
	cin>>numberOfDays;
	
	for(int i=1; i<=numberOfDays; i++){
		cout<<"Enter sales for day " <<i <<" ";
		cin>>dailySales;
		totalSales=totalSales+dailySales;
			}
		cout<<"The total sales is: ";
		cout<<totalSales;
		
		return 0;
}
