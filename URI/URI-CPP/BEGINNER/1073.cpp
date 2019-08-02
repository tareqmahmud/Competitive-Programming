#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int N;
    // Take N input
    cin >> N;
    // Loop N times
    for (int i = 1; i <= N; i++) {
        // Find N is odd or even. If it's even then square it and print that value
        if (i % 2 == 0) {
            printf("%d^2 = %d\n", i, (i * i));
        }
    }
    return 0;
}