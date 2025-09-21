#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int low, high;
    cout << "Enter two numbers (low and high): ";
    cin >> low >> high;

    if (low > high) {
        
        int temp = low;
        low = high;
        high = temp;
    }

    cout << "Prime numbers between " << low
         << " and " << high << " are:\n";

    for (int i = low; i <= high; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;

    return 0;
}
