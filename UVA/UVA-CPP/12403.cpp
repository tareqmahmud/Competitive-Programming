#include<bits/stdc++.h>

using namespace std;

int main() {
    int loop, amount, total = 0;
    string input;
    cin >> loop;

    while (loop--) {
        cin >> input;
        if (input == "donate") {
            cin >> amount;
            total += amount;
        } else if (input == "report") {
            cout << total << endl;
        }
    }

    return 0;
}