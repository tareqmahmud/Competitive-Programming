/*
 * Create the function factorial here
 */
function factorial(number) {
    let total = 1;
    for (let i = 1; i <= Number(number); i++) {
        total *= i;
    }
    return total;
}