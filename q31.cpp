#include <iostream>
using namespace std;

int main() {
    long long n, reversed = 0;
    cout << "Enter an integer: ";
    cin >> n;

    bool isNegative = false;

    
    if (n < 0) {
        isNegative = true;
        n = -n;
    }

    while (n != 0) {
        int digit = n % 10;         
        reversed = reversed * 10 + digit;
        n = n / 10;                  
    }

    if (isNegative)
        reversed = -reversed;

    cout << "Reversed number: " << reversed << endl;
    return 0;
}
