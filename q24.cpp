#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter how many odd natural numbers you want to sum (N): ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += 2 * i - 1;   
    }

    cout << "Sum of first " << N << " odd natural numbers is: " << sum << endl;

    return 0;
}
