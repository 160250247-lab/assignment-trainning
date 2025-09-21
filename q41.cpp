#include <iostream>
#include <cmath>
using namespace std;


bool isArmstrong(int num) {
    int sum = 0, digits = 0, temp = num;

    // Count digits
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

    return sum == num;
}

int main() {
    cout << "Armstrong numbers under 1000 are:\n";

    for (int i = 1; i < 1000; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
