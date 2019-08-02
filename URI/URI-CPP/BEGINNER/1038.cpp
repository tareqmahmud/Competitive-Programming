#include<iostream>

using namespace std;

int main(void){
    // Initialize variable
    int productCode, productQuantity;
    double actualPrice;

    // Take input
    cin >> productCode >> productQuantity;

    // Calculate price based on productCode and productQuantity
    switch(productCode){
        case 1:
            actualPrice = 4.00 * productQuantity;
            break;
        case 2:
            actualPrice = 4.50 * productQuantity;
            break;
        case 3:
            actualPrice = 5.00 * productQuantity;
            break;
        case 4:
            actualPrice = 2.00 * productQuantity;
            break;
        case 5:
            actualPrice = 1.50 * productQuantity;
            break;
    }

    // Ouput that Calculate value
    printf("Total: R$ %.2lf\n", actualPrice);

    return 0;
}