#include<bits/stdc++.h>

using namespace std;

int main() {
    int age, years, months, days;
    cin >> age;

    years = age / 365;
    age %= 365;

    months = age / 30;
    age %= 30;

    days = age;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}