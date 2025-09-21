#include <iostream>
#include <string>
using namespace std;

int main() {
    string time;
    string hour, minute;

   
    cout << "Enter time in HH:MM format: ";
    cin >> time;

    
    hour = time.substr(0, 2);
    minute = time.substr(3, 2);

   
    cout << "Hour - " << hour << ", Minute - " << minute << endl;

    return 0;
}
