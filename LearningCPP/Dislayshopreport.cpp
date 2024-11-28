#include <iostream>
#include <fstream>
using namespace std;
int main(){
	//Declaration of varibles
	int no_of_shoes_produced;
/*	int sold;
	int report_id;
	int remained;
	int totals_sales;
	int total_profit;*/
	ifstream myFile; 

	myFile.open("report.txt");
	myFile>>no_of_shoes_produced; cout<<endl;
	myFile>>sold; cout<<endl;
	myFile>>report_id; cout<<endl;
	myFile>>remained; cout<<endl;
	myFile>>totals_sales; cout<<endl;
	myFile>>total_profit;
	myFile.close();
	
	cout<<no_of_shoes_produced <<endl;
	cout<<sold <<endl;
	cout<<report_id <<endl;
	cout<<remained <<endl;
	cout<<totals_sales <<endl;
	cout<<total_profit;
	
	
	
	return 0;
}
