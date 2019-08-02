#include<iostream>
#include<string>

using namespace std;

int main() {
    string input;

    while (getline(cin, input), !cin.eof()) {
        cout << input << endl;
    }

    return 0;
}