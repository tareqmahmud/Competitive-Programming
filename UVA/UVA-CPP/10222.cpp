#include<iostream>
#include <string>

using namespace std;

char keyboardLower[] = {"`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"};
char keyboardUpper[] = {"~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?"};

char decode(char word) {
    for (int i = 0; i < 47; i++) {
        if (keyboardLower[i] == word) {
            return keyboardLower[i - 2];
        } else if (keyboardUpper[i] == word) {
            return keyboardLower[i - 2];
        }
    }
    return word;
}

int main() {
    string word;
    getline(cin, word);
    for (int i = 0; i < word.length(); i++) {
        cout << decode(word.at(i));
    }
    cout << endl;
    return 0;
}