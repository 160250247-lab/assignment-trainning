#include <iostream>
using namespace std;

int main() {
    int score;

   
    cout << "Enter the student's score (0-100): ";
    cin >> score;

    
    if (score < 0 || score > 100) {
        cout << "Invalid score! Please enter a value between 0 and 100." << endl;
    } else {
        char grade;

        if (score >= 90)
            grade = 'A';
        else if (score >= 80)
            grade = 'B';
        else if (score >= 70)
            grade = 'C';
        else if (score >= 60)
            grade = 'D';
        else
            grade = 'F';

        cout << "Grade: " << grade << endl;
    }

    return 0;
}
