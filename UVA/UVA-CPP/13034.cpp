#include<iostream>

using namespace std;

int main() {
    int input, input_case = 1, problem;
    bool solved_team;
    cin >> input;
    while (input--) {
        solved_team = true;
        for (int i = 0; i < 13; i++) {
            cin >> problem;
            if (problem == 0) {
                solved_team = false;
            }
        }
        if (solved_team) {
            printf("Set #%d: Yes\n", input_case);
        } else {
            printf("Set #%d: No\n", input_case);
        }
        input_case++;
    }
    return 0;
}