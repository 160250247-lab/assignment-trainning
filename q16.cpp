#include <iostream>
using namespace std;

int main() {
    char choice;
    float temp, converted;

   
    cout << "Choose conversion type:\n";
    cout << "C - Convert Celsius to Fahrenheit\n";
    cout << "F - Convert Fahrenheit to Celsius\n";
    cout << "Enter your choice (C/F): ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        converted = (temp * 9 / 5) + 32;  // Celsius to Fahrenheit
        cout << temp << "°C = " << converted << "°F" << endl;
    }
    else if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        converted = (temp - 32) * 5 / 9;  // Fahrenheit to Celsius
        cout << temp << "°F = " << converted << "°C" << endl;
    }
    else {
        cout << "Invalid choice! Please enter C or F." << endl;
    }

    return 0;
}
