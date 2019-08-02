#include<bits/stdc++.h>

using namespace std;

int main() {
    int number1, number2;

    while (cin >> number1 >> number2) {
        cout << (number1 ^ number2) << endl; // ^ means XOR Gate
    }
    return 0;
}