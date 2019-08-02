#include <iostream>

using namespace std;

int main() {
    int input, number1, number2, number3, count = 1;
    cin >> input;

    while (input--) {
        // take input
        cin >> number1 >> number2 >> number3;

        // Find the medium number
        if ((number1 > number2 && number3 < number2) || (number1 < number2 && number3 > number2)) {
            printf("Case %d: %d\n", count, number2);
        } else if ((number2 > number1 && number3 < number1) || (number2 < number1 && number3 > number1)) {
            printf("Case %d: %d\n", count, number1);
        } else {
            printf("Case %d: %d\n", count, number3);
        }
        count++;
    }
    return 0;
}