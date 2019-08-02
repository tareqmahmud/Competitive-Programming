#include <iostream>

using namespace std;

int main() {
    int number1, number2;
    while (cin >> number1 >> number2) {
        // Sort the number based on maximum minimum
        int tmpNumber1 = number1;
        int tmpNumber2 = number2;
        if (number1 > number2) swap(number1, number2);

        // Find the cycle between number1 and number2
        int maxCycle = 0;
        int cycleCount;
        while (number1 <= number2) {
            cycleCount = 1;
            long int number = number1;
            // Cycle algorithm for specific number
            while (number != 1) {
                if (number % 2 != 0) {
                    number = 3 * number + 1;
                } else {
                    number /= 2;
                }
                cycleCount++;
            }
            // update max cycle if cycleCount is greater then maxCycle
            if (cycleCount > maxCycle) {
                maxCycle = cycleCount;
            }
            number1++;
        }

        // Print the number1, number2 and maxCycle
        printf("%d %d %d\n", tmpNumber1, tmpNumber2, maxCycle);
    }
    return 0;
}