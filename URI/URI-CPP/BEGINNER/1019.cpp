#include<bits/stdc++.h>

using namespace std;

int main() {
    int time, hours, minutes, seconds;
    cin >> time;

    hours = time / 3600;
    time = time % 3600;

    minutes = time / 60;
    time = time % 60;

    seconds = time;

    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}