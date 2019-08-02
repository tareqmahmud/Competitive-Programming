#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    double salary, newSalary, increaseSalary;
    int percent;
    // Take input
    cin >> salary;
    // Find appropriate salary and increase percent
    if (salary >= 0 && salary <= 400.00) {
        newSalary = salary + (salary * 0.15);
        increaseSalary = (salary * 0.15);
        percent = 15;
    } else if (salary >= 400.01 && salary <= 800.00) {
        newSalary = salary + (salary * 0.12);
        increaseSalary = (salary * 0.12);
        percent = 12;
    } else if (salary >= 800.01 && salary <= 1200.00) {
        newSalary = salary + (salary * 0.10);
        increaseSalary = (salary * 0.10);
        percent = 10;
    } else if (salary >= 1200.01 && salary <= 2000.00) {
        newSalary = salary + (salary * 0.07);
        increaseSalary = (salary * 0.07);
        percent = 7;
    } else if (salary > 2000) {
        newSalary = salary + (salary * 0.04);
        increaseSalary = (salary * 0.04);
        percent = 4;
    }
    // Output all calculate information
    printf("Novo salario: %.2lf\n", newSalary);
    printf("Reajuste ganho: %.2lf\n", increaseSalary);
    printf("Em percentual: %d %\n", percent);
    return 0;
}