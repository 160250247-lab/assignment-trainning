#include <iostream>
using namespace std;

int main() {
    int asciiCode;

    
    cout << "Enter an ASCII code (0 - 127): ";
    cin >> asciiCode;

    
    if (asciiCode >= 0 && asciiCode <= 127) {
        cout << "The character for ASCII code " << asciiCode
             << " is: " << char(asciiCode) << endl;
    } else {
        cout << "Invalid ASCII code! Please enter a value between 0 and 127." << endl;
    }

    return 0;
}
