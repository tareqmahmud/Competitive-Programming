#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    double number;
    int positive = 0;
    // Loop for 6 times
    for (int i = 0; i < 6; i++) {
        // Take input
        cin >> number;
        // Find is number positive or negative and store positive appropriate variable
        if (number > 0) {
            positive++;
        }
    }
    cout << positive << " valores positivos" << endl;
    return 0;
}