#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    long long fact = 1;  

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}
