#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int N;
    // Take input
    cin >> N;
    for (int i = 1; i <= 10000; i++) {
        if (i % N == 2) {
            cout << i << endl;
        }
    }
    return 0;
}