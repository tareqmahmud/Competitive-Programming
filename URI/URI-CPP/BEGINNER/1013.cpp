#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int a, b, c;
    // Take input
    cin >> a >> b >> c;
    // Find the largest number of a & b
    int maxab = (a + b + abs(a - b)) / 2;
    // Find the largest number of maxab and s
    int finalMax = (maxab + c + abs(maxab - c)) / 2;
    // Output that largest number
    cout << finalMax << " eh o maior" << endl;
    return 0;
}