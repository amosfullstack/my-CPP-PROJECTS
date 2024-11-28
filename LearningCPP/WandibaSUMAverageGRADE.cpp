#include <iostream>
//include <iomanip>

using namespace std;

// Function to calculate GPA based on average score
char calculateGrade(double average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main() {
    const int numStudents = 3;
    const int numSubjects = 9;

    // 2D array to store scores of each student in each subject
    int scoreMark[numStudents][numSubjects];

    // 2D array to store report: scores, total, average, GPA
    double report[numStudents][numSubjects+ 3]; // +3 for total, average, GPA

    // Input scores for each student
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter scores for student " << i + 1 <<":" <<endl;
        double total = 0;
        for (int j = 0; j < numSubjects; ++j) {
            cout << "Score for subject " << j + 1 << ": ";
            cin >> scoreMark[i][j];
            total =total + scoreMark[i][j];
        }
        double average = total / numSubjects;
        char grade = calculateGrade(average);

        // Storing scores, total, average and grade in report
        for (int j = 0; j < numSubjects; ++j) {
            report[i][j] = scoreMark[i][j];
        }
        report[i][numSubjects] = total;
        report[i][numSubjects + 1] = average;
        report[i][numSubjects + 2] = grade;
    }

    // Display the report
    cout<<endl;
    cout << "Report: " <<endl;
    //cout << "Student\tScores\t\t\t\t\tTotal\tAverage\tGPA\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << i + 1 << "\t";
        for (int j = 0; j < numSubjects; ++j) {
            cout << report[i][j] << "\t";
        }
        cout << report[i][numSubjects] << "\t"
             << fixed << setprecision(2) << report[i][numSubjects + 1] << "\t"
             << (char)report[i][numSubjects + 2] <<endl;
    }

    return 0;
}

