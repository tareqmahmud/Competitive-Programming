#include<bits/stdc++.h>

using namespace std;

int main() {
    int number1, number2;

    while (cin >> number1 >> number2) {
        if (number1 >= number2) {
            cout << number1 << endl;
        } else {
            cout << number2 << endl;
        }
    }
    return 0;
}