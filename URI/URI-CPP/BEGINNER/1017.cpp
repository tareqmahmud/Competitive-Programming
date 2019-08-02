#include <iostream>

using namespace std;

int main(void){
    // Initialize variable
    int time, distance;
    double fuelSpent;

    // Take input
    cin >> time >> distance;

    // Calculate fuel spent
    fuelSpent = (time*1.0*distance) / 12;

    // Output that fuelSpent
    printf("%.3lf\n", fuelSpent);
    return 0;
}