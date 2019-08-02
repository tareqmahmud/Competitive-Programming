#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int number, even = 0;
    // Loop for 5 times
    for (int i = 0; i < 5; i++) {
        // Take input
        cin >> number;
        if (number % 2 == 0) {
            even++;
        }
    }
    cout << even << " valores pares" << endl;
    return 0;
}