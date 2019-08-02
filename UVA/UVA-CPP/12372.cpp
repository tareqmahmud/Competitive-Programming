#include<bits/stdc++.h>

using namespace std;

int main() {
    int loop, number1, number2, number3, count = 1;
    cin >> loop;

    while (loop--) {
        cin >> number1 >> number2 >> number3;
        if (number1 <= 20 && number2 <= 20 && number3 <= 20) {
            cout << "Case " << count << ": good" << endl;
        } else {
            cout << "Case " << count << ": bad" << endl;
        }
        count++;
    }
    return 0;
}