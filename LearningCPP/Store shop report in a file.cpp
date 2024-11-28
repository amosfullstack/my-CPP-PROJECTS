#include <iostream>
#include <fstream>
using namespace std;
int main(){
	//Declaration of varibles
	int no_of_shoes_produced;
	int sold;
	int report_id;
	int remained;
	int totals_sales;
	int total_profit;
	ofstream myFile;
	
	//Prompting user to enter data
	cout<<"Enter the report ID: ";
	cin>>report_id; cout <<endl;
	
	cout<<"Enter Number of Shoes Produced: ";
	cin>>no_of_shoes_produced; cout<<endl;
	
	cout<<"Enter Number of Shoes Sold: ";
	cin>>sold; cout<<endl;
	
	cout<<"Enter the Number of Shoes remained after Sales: ";
	cin>>remained; cout<<endl;
	
	cout<<"Enter Total Sales: ";
	cin>>totals_sales; cout<<endl;
	
	cout<<"Enter Total Profit: ";
	cin>>total_profit; cout<<endl;

//Soring the report permanently to a file	
	myFile.open("report.txt");
	myFile<<no_of_shoes_produced <<endl;
	myFile<<sold <<endl;
	myFile<<report_id <<endl;
	myFile<<remained <<endl;
	myFile<<totals_sales <<endl;
	myFile<<total_profit;
	cout<<"The report has been written to outputfile successfully!";
	myFile.close();
	
	
	return 0;
}
