#include<iostream>

using namespace std;

char characters[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};

char decode(char c) {
    for (int i = 0; i < 47; i++) {
        if (c == characters[i]) {
            return characters[i - 1];
        }
    }
    return c;
}

int main() {
    char character;
    while (scanf("%c", &character) == 1) {
        printf("%c", decode(character));
    }
    return 0;
}