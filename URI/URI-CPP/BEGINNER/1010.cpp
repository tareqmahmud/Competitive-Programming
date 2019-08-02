#include <iostream>

using namespace std;

int main() {
    // Initialize variable
    int codeOfProduct, unitsOfProduct;
    double amountOfPerProduct, totalAmountOfProduct = 0;
    for(int i = 1; i <= 2; i++) {
        // Take input
        cin >> codeOfProduct >> unitsOfProduct >> amountOfPerProduct;
        // Save total amount of 1 product each time
        totalAmountOfProduct += unitsOfProduct * amountOfPerProduct;
    }
    // Output the total amount
    printf("VALOR A PAGAR: R$ %.2lf\n", totalAmountOfProduct);
    return 0;
}