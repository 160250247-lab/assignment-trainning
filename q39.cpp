#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 0;
    }

    long long next = num + 1; 
    while (!isPrime(next)) {
        next++;
    }

    cout << "The next prime number after " << num << " is: " << next << endl;
    return 0;
}
