#include <iostream>
#include <math.h>

using namespace std;

int main() {
    // Initialize variable
    double x1, y1, x2, y2, distance;
    // Take input
    cin >> x1 >> y1 >> x2 >> y2;
    // Find the distance
    distance = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
    // Output that distance
    printf("%.4lf\n", distance);
    return 0;
}