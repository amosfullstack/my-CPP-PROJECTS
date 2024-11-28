#include <iostream>
#include <string>

using namespace std;

const int NUM_QUESTIONS = 5;
const int MAX_MARKS_PER_QUESTION = 20;

// Function to rank the average score
string rank(double average) {
    if (average >= 0 && average <= 5) {
        return "Weak";
    } else if (average >= 6 && average <= 10) {
        return "Normal";
    } else if (average >= 11 && average <= 15) {
        return "Good";
    } else if (average >= 16 && average <= 20) {
        return "Best";
    }
    return "Invalid";
}

// Function to print the rank of the average score
void showrank(const string &rank) {
    cout << "Rank: " << rank << endl;
}

int main() {
    int marks[NUM_QUESTIONS];
    int totalMarks = 0;
    double averageScore;

    // Input scores for each question
    cout << "Enter the marks for each of the " << NUM_QUESTIONS << " questions:" << endl;
    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        cout << "Marks for question " << i + 1 << ": ";
        cin >> marks[i];
        if(marks[i]>20){
        	cerr<<"The marks for each QN should be less than or equal to 20 ";
        	return 1;
		}
        totalMarks += marks[i];
    }

    // Calculate the average score
    averageScore =(totalMarks) / NUM_QUESTIONS;

    // Display the report
    cout<<endl;
    cout << "Report:" << endl;
    cout << "Number of questions attempted: " << NUM_QUESTIONS << endl;
    cout << "Total marks scored: " << totalMarks << endl;
    cout << "Average score per question: " << averageScore << endl;

    // Determine the rank based on the average score and display it
    string scoreRank = rank(averageScore);
    showrank(scoreRank);

    return 0;
}

