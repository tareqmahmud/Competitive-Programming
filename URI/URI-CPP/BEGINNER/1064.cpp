#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int positive;
    double number, total = 0;
    // Loop for 6 times
    for (int i = 0; i < 6; i++) {
        // Take input
        cin >> number;
        // Find is number positive or negative and store positive appropriate variable
        if (number > 0) {
            positive++;
            // Store total positive number
            total += number;
        }

    }
    // Output total positive number and average number
    cout << positive << " valores positivos" << endl;
    printf("%.1lf\n", total / positive);
    return 0;
}