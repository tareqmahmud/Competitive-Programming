#include<iostream>

using namespace std;

bool isLeapYear(int year) {
    if (year % 400 == 0) return true;
    else if (year % 100 == 0) return false;
    else if (year % 4 == 0) return true;
    else return false;
}

int main() {
    int input, input_loop_count = 1, day, month, birth_year, query_year, count_birthday;
    cin >> input;
    while (input--) {
        cin >> day >> month >> birth_year >> query_year;
        count_birthday = 0;
        for (int year = birth_year + 1; year <= query_year; year++) {
            if (day == 29 && month == 2) {
                // check is it leap year or not
                if (isLeapYear(year)) {
                    count_birthday++;
                }
            } else {
                count_birthday++;
            }
        }
        printf("Case %d: %d\n", input_loop_count, count_birthday);

        input_loop_count++;
    }
    return 0;
}