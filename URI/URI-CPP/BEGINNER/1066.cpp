#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int number, positive = 0, negative = 0, odd = 0, even = 0;
    // Loop for 5 times
    for (int i = 0; i < 5; i++) {
        // Take input
        cin >> number;
        // Find positive, negative, even & odd
        if (number > 0) positive++;
        if (number < 0) negative++;
        if (number % 2 == 0) even++;
        if (number % 2 != 0) odd++;
    }
    // Output odd, even, positive, negative
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;
    return 0;
}