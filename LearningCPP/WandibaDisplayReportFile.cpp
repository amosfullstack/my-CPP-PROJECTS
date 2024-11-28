#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to calculate Grade using the average score
char calculateGrade(double average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main() {
    const int numStudents = 1;
    const int numSubjects = 9;

    // 2D array to store scores of each student in each subject
    int scoreMark[numStudents][numSubjects];

    // Arrays to store total, average, and GPA for each student
    double totalScores[numStudents];
    double averageScores[numStudents];
    char grades[numStudents];

    // Input scores for each student
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 <<":" <<endl;
        double total = 0;
        for (int j = 0; j < numSubjects; ++j) {
            cout << "Score for Subject " << j + 1 << ": ";
            cin >> scoreMark[i][j];
            total += scoreMark[i][j];
        }
        totalScores[i] = total;
        averageScores[i] = total / numSubjects;
        grades[i] = calculateGrade(averageScores[i]);
    }

    // Display the report
    cout<<endl;
    cout << "The Student Report" <<endl;
    for (int i = 0; i < numStudents; ++i) {
        cout<<"Student " << i + 1 << ":       ";
        for (int j = 0; j < numSubjects; ++j) {
            cout << scoreMark[i][j] << " ";
        }
        cout << "  " << totalScores[i] << "    " << averageScores[i] << "    " << grades[i] << "\n";
    }

    // Export data to a file named report.txt
    ofstream outFile("report.txt");
    outFile << "The Student Report" << endl;
    for (int i = 0; i < numStudents; ++i) {
        outFile << "Student " << i + 1 << ":       ";
        for (int j = 0; j < numSubjects; ++j) {
            outFile << scoreMark[i][j] << " ";
        }
        outFile << "  " << totalScores[i] << "    " << averageScores[i] << "    " << grades[i] << "\n";
    }
    outFile.close();
    cout << "Report exported to report.txt" << endl;

    // Read data from report.txt and display on the screen use getline function to dispaly line by line
    ifstream displayFile("report.txt");
    string line;
    while (getline(displayFile, line)) {
        cout << line << endl;
    }
    displayFile.close();

    return 0;
}

