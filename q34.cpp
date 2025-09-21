#include <iostream>
using namespace std;

bool isPerfectSquare(long long x) {
    long long s = static_cast<long long>(sqrt(x));
    return (s * s == x);
}

bool isFibonacci(long long n) {
    
    return isPerfectSquare(5 * n * n + 4) ||
           isPerfectSquare(5 * n * n - 4);
}

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative numbers are not in the Fibonacci series." << endl;
        return 0;
    }

    if (isFibonacci(num))
        cout << num << " is in the Fibonacci series." << endl;
    else
        cout << num << " is NOT in the Fibonacci series." << endl;

    return 0;
}
