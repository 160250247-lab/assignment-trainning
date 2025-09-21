#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two positive integers: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Please enter positive integers only." << endl;
        return 0;
    }

    int num1 = a;
    int num2 = b;

    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;

   
    long long lcm = (static_cast<long long>(num1) * num2) / gcd;

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
    return 0;
}
