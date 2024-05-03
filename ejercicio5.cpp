#include <iostream>
using namespace std;

int main() {
    int scores[8]; // array to store the scores of 8 students
    int sum = 0; // variable to store the sum of the scores
    int passCount = 0; // variable to store the number of students who passed
    int failCount = 0; // variable to store the number of students who failed

    // read the scores of 8 students from the user
    for (int i = 0; i < 8; i++) {
        cout << "Enter the score of student " << i+1 << ": ";
        cin >> scores[i];
        sum += scores[i]; // add the score to the sum
        if (scores[i] >= 60) { // check if the student passed
            passCount++;
        } else {
            failCount++;
        }
    }

    // calculate the average of the class
    double average = (double)sum / 8;

    // output the results
    cout << "Number of students who passed: " << passCount << endl;
    cout << "Number of students who failed: " << failCount << endl;
    cout << "Average of the class: " << average << endl;

    return 0;
}