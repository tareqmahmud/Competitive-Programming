#include<bits/stdc++.h>

using namespace std;

int main() {
    long int warrior1, warrior2, differenceWarrior;

    while (cin >> warrior1 >> warrior2) {
        if (warrior1 >= warrior2) {
            differenceWarrior = warrior1 - warrior2;
        } else {
            differenceWarrior = warrior2 - warrior1;
        }
        cout << differenceWarrior << endl;
    }
    return 0;
}