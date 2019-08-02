#include<iostream>
#include <cmath>

using namespace std;

int main() {
    int limit = 201, startNumber, endNumber, sqrtNumber;
    // Run the program 201 times
    while (limit--) {
        cin >> startNumber >> endNumber;
        // If startNumber & endNumber is 0 0 the continue
        if (startNumber == 0 && endNumber == 0) {
            continue;
        }

        // Find the total integer sqrt number from startNumber to endNumber inclusive
        int totalSqrt = 0;
        for (int i = startNumber; i <= endNumber; i++) {
            sqrtNumber = static_cast<int>(sqrt(i));
            int intNumber = sqrtNumber * sqrtNumber;
            if (intNumber == i) {
                totalSqrt++;
            }
        }

        // Print the total integer sqrt number from startNumber to endNumber inclusive
        cout << totalSqrt << endl;
    }
    return 0;
}