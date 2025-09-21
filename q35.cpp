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

    int x = a;
    int y = b;

    
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    cout << "HCF of " << a << " and " << b << " is: " << x << endl;
    return 0;
}
