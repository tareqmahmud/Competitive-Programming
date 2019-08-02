#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int X;
    double Y;
    // Take input
    cin >> X >> Y;
    // Output Average consumption
    printf("%.3lf km/l\n", X / Y);
    return 0;
}