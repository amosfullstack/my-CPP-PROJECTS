#include <iostream>

using namespace std;

int main() {
    // Declare the arrays for storing votes
    int Votes[6][4] = {
        {123, 65, 42, 76},
        {56, 38, 34, 87},
        {90, 23, 75, 65},
        {124, 12, 65, 99},
        {78, 98, 68, 87},
        {12, 67, 45, 34}
    };

    // Arrays to store average votes per candidate and per province
    double AvgVC[6];
    double AvgVP[4];

    // Calculate average votes per candidate
    for (int i = 0; i < 6; i++) {
        double sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += Votes[i][j];
        }
        AvgVC[i] = sum / 4;
    }

    // Calculate average votes per province
    for (int j = 0; j < 4; j++) {
        double sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += Votes[i][j];
        }
        AvgVP[j] = sum / 6;
    }

    // Display all votes
    cout << "Votes:\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            cout << Votes[i][j] << " ";
        }
        cout << endl;
    }

    // Display average votes per candidate
    cout << "\nAverage Votes per Candidate:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Candidate " << i + 1 << ": " << AvgVC[i] << endl;
    }

    // Display average votes per province
    cout << "\nAverage Votes per Province:\n";
    for (int j = 0; j < 4; j++) {
        cout << "Province " << j + 1 << ": " << AvgVP[j] << endl;
    }

    return 0;
}

