#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int employNumber, hoursOfWork;
    double amountPerHour;
    // Take input
    cin >> employNumber >> hoursOfWork >> amountPerHour;
    double salary = hoursOfWork * amountPerHour;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", employNumber, salary);
    return 0;
}