#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long num, originalNum, sum = 0;
    int digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative numbers cannot be Armstrong numbers." << endl;
        return 0;
    }

    originalNum = num;

    
    long long temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);  
        temp /= 10;
    }

    if (sum == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is NOT an Armstrong number." << endl;

    return 0;
}
