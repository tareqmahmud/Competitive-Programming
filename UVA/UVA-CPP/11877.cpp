#include<iostream>

using namespace std;

int main() {
    int empty_bottle;
    while (cin >> empty_bottle) {
        if (empty_bottle == 0) break;

        int total_drinking_bottle = 1;
        int count = 0;
        for (int i = 0; i < empty_bottle; i++) {
            if (count == 3) {
                count = 0;
                total_drinking_bottle++;
                empty_bottle++;
            }
            count++;
        }
        cout << total_drinking_bottle << endl;
    }
    return 0;
}