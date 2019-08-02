#include <iostream>
#include <string>

using namespace std;

int main() {
    // Initialize variable and months array
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October",
                       "November", "December"};
    int month;
    // Take input
    cin >> month;
    // Find the month name from input
    cout << months[month - 1] << endl;
    return 0;
}