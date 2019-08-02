#include<bits/stdc++.h>

using namespace std;

#define PI 3.14159

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    // Output
    printf("TRIANGULO: %0.3lf\n", (A * C) / 2);
    printf("CIRCULO: %0.3lf\n", PI * C * C);
    printf("TRAPEZIO: %0.3lf\n", ((A + B) / 2) * C);
    printf("QUADRADO: %0.3lf\n", B * B);
    printf("RETANGULO: %0.3lf\n", A * B);

    return 0;
}