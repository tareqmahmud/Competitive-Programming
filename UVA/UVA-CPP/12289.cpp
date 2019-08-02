#include<iostream>
#include<string>

using namespace std;

int main() {
    string numbers[3] = {"one", "two", "three"};
    int strings_to_numbers[3] = {1, 2, 3};
    string number, garbage;

    int input;
    cin >> input;
    getline(cin, garbage);

    while (input--) {
        getline(cin, number);
        for (int i = 0; i < 3; i++) {
            // if number length doesn't match then continue
            if (number.length() != numbers[i].length()) continue;
            // if match then count the error
            int count = 0;
            for (int j = 0; j < number.length(); j++) {
                // check is number character and numbers array character match ot not
                // if not then increment count
                if (number.at(j) != numbers[i].at(j)) {
                    count++;
                }
            }
            // if there is only one error then print the actual value
            if (count == 0 || count == 1) {
                cout << strings_to_numbers[i] << endl;
            }
        }
    }

    return 0;
}