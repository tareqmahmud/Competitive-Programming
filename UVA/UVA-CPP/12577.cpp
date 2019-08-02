#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    int count = 1;

    while (getline(cin, input)) {
        if (input == "Hajj") {
            cout << "Case " << count << ": Hajj-e-Akbar" << endl;
        } else if (input == "Umrah") {
            cout << "Case " << count << ": Hajj-e-Asghar" << endl;
        } else if (input == "*") {
            break;
        }
        count++;
    }

    return 0;
}