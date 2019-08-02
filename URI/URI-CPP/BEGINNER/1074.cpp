#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int N, number;
    // Take N Input
    cin >> N;
    // Loop for N time
    for (int i = 0; i < N; i++) {
        // Input number
        cin >> number;
        // Calculate odd, even, positive, negative of that number
        if (number  == 0) {
            cout << "NULL" << endl;
        }else if (number % 2 != 0 && number > 0) {
            cout << "ODD POSITIVE" << endl;
        }else if (number % 2 != 0 && number < 0) {
            cout << "ODD NEGATIVE" << endl;
        }else if (number % 2 == 0 && number > 0) {
            cout << "EVEN POSITIVE" << endl;
        }else if (number % 2 == 0 && number < 0) {
            cout << "EVEN NEGATIVE" << endl;
        }
    }
    return 0;
}