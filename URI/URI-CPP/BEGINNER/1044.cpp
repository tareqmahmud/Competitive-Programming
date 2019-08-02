#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int A, B;
    // Take input
    cin >> A >> B;
    // Find A % B == 0 || B % A == 0 or not
    if (A % B == 0 || B % A == 0) {
        cout << "Sao Multiplos" << endl;
    }else{
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}