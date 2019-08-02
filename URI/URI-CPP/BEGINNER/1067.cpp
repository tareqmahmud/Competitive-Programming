#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int X;
    // input X
    cin >> X;
    // Loop X times
    for (int i = 1; i <= X; i++) {
        // If X is odd then print it
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
    return 0;
}