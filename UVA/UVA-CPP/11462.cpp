#include<bits/stdc++.h>

using namespace std;

int main() {
    int loop;

    while (cin >> loop) {
        if (loop == 0) {
            break;
        }
        long long int numbers[loop];
        for (int i = 0; i < loop; i++) {
            cin >> numbers[i];
        }
        sort(numbers, numbers + loop);
        for (int i = 0; i < loop; i++) {
            cout << numbers[i];
            if (i < loop - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}