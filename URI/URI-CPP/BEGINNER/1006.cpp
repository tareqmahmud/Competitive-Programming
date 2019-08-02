#include <iostream>

using namespace std;

int main() {
    double A, B, C, average; // Initialize variable
    cin >> A >> B >> C; // Take input
    average = ((A * 2) + (B * 3) + (C * 5)) / (2 + 3 + 5); // Find average with weight
    printf("MEDIA = %.1lf\n", average); // Output that average
    return 0;
}