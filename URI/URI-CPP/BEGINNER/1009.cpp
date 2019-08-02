#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    char sellerName[100];
    double fixedSalary, saleAmount;
    // Take input
    cin.getline(sellerName, 100);
    cin >> fixedSalary >> saleAmount;
    // Find the total salary after 15% commission
    double totalSalary = fixedSalary + ((15 * saleAmount) / 100);
    // Output that total salary
    printf("TOTAL = R$ %.2lf\n", totalSalary);
    return 0;
}