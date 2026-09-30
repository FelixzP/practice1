#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


void calculateVotes(int numCandidates, int totalStudents, int &votedCount, int &notVotedCount, int votes[]) {
    for (int i = 0; i < totalStudents; ++i) {
        int vote = rand() % (numCandidates + 1);
        if (vote == 0) {
            notVotedCount++;
        } else {
            votedCount++;
            votes[vote]++;
        }
    }
}

void displayResults(int numCandidates, int totalStudents, int votedCount, int notVotedCount, int votes[]) {
    cout << "\nNumber of right student : " << totalStudents << endl;
    
    double votedPercent = (double)votedCount / totalStudents * 100;
    double notVotedPercent = (double)notVotedCount / totalStudents * 100;
    
    cout << "Number of Votes : " << votedCount << "    = " << fixed << setprecision(1) << votedPercent << "%" << endl;
    cout << "Number of not Votes : " << notVotedCount << " = " << fixed << setprecision(1) << notVotedPercent << "%" << endl;
    
    cout << "\nResult of election chairman" << endl;
    cout << "---------------------------------" << endl;
    cout << " No.     Votes     Percent(%)" << endl;
    cout << "---------------------------------" << endl;
    
    for (int i = 1; i <= numCandidates; ++i) {
        double percent = 0.0;
        if (votedCount > 0) {
            percent = (double)votes[i] / votedCount * 100;
        }
        cout << setw(3) << i << "." << setw(10) << votes[i] << setw(13) << fixed << setprecision(2) << percent << endl;
    }
    
    cout << "---------------------------------" << endl;
    cout << "Total" << setw(9) << votedCount << setw(13) << fixed << setprecision(2) << 100.00 << endl;
}

int main() {
    srand(time(0));
    
    int numCandidates;
    cout << "Enter number student chairman : ";
    cin >> numCandidates;
    
    int totalStudents = 500;
    int votedCount = 0;
    int notVotedCount = 0;
    
    int *votes = new int[numCandidates + 1](); 
    
    calculateVotes(numCandidates, totalStudents, votedCount, notVotedCount, votes);
    displayResults(numCandidates, totalStudents, votedCount, notVotedCount, votes);
    
    return 0;
}
