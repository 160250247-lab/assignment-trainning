#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms (N): ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    long long first = 0, second = 1, next;

    cout << "First " << N << " terms of the Fibonacci series: ";

    if (N >= 1) cout << first;
    if (N >= 2) cout << " " << second;

    for (int i = 3; i <= N; i++) {
        next = first + second;
        cout << " " << next;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
