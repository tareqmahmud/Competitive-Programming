#include<bits/stdc++.h>

using namespace std;

int main() {
    double number1, number2, number3, number4, score;
    cin >> number1 >> number2 >> number3 >> number4;
    double average = (number1 * 2) + (number2 * 3) + (number3 * 4) + (number4 * 1);
    average = average / (2 + 3 + 4 + 1);
    printf("Media: %0.1lf\n", average);
    if (average >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (average < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else if (average >= 5.0 && average <= 6.9) {
        cout << "Aluno em exame." << endl;
        cin >> score;
        printf("Nota do exame: %0.1lf\n", score);
        average = (average + score) / 2;
        if (average >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else if (average <= 4.9) {
            cout << "Aluno reprovado." << endl;
        }
        printf("Media final: %0.1lf\n", average);
    }

    return 0;
}