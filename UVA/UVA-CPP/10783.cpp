#include<bits/stdc++.h>

using namespace std;

int main() {
    int loop, number1, number2, total, count = 1;
    cin >> loop;

    while (loop--) {
        cin >> number1 >> number2;
        total = 0;
        for (int i = number1; i <= number2; i++) {
            if (i % 2 != 0) {
                total += i;
            }
        }
        cout << "Case " << count << ": " << total << "" << endl;
        count++;
    }
    return 0;
}