#include <iostream>
using namespace std;

int main() {
    int age;

    
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age! Please enter a positive number." << endl;
    } else if (age <= 12) {
        cout << "You are classified as a Child." << endl;
    } else if (age <= 19) {
        cout << "You are classified as a Teenager." << endl;
    } else if (age <= 59) {
        cout << "You are classified as an Adult." << endl;
    } else {
        cout << "You are classified as a Senior." << endl;
    }

    return 0;
}
