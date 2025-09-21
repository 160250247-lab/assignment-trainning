#include <iostream>
using namespace std;

int main() {
    float side1, side2, side3;

    
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    
    if ((side1 + side2 > side3) &&
        (side1 + side3 > side2) &&
        (side2 + side3 > side1)) {

        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is Equilateral." << endl;
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "The triangle is Isosceles." << endl;
        }
        else {
            cout << "The triangle is Scalene." << endl;
        }

    } else {
        cout << "The given lengths do not form a valid triangle." << endl;
    }

    return 0;
}
