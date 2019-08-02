#include <iostream>

using namespace std;

int main() {
    double A, R, n = 3.14159; // Initialize variable
    cin >> R; // Take input

    A = n * (R * R); // A = π . R**2
    printf("A=%.4lf\n", A); // Output

    return 0;
}