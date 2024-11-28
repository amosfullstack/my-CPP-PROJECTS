#include <iostream>
using namespace std;
int main(){
	const int numStudents=1;
    int numSubjects;
	
	cout<<"Enter the number of subjects ";
	cin>>numSubjects;
	
	if(numSubjects<7 || numSubjects>9){
		cerr<<"Number of subjects must be btn 7 and 9";
		return 1;
	}
	
	//2D Array declaration
	int scoreMark[numStudents][numSubjects];
	
	//Get the Scores of each student using for loop
	cout<<"Enter the scores for " <<numStudents <<"Students" <<endl;
	for(int i=0; i<numStudents; i++){
		cout<<"Student " <<i+1 <<endl;
		for(int j=0; j<numSubjects; j++){
			cout<<"Subject " <<j+1 <<":";
			cin>>scoreMark[i][j];
		}
	}
	cout<<"Scores accepted successfully!" <<endl;
	
	return 0;
}
