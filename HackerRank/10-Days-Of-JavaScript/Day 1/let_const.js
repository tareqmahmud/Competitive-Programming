function main() {
    // Write your code here. Read input using 'readLine()' and print output using 'console.log()'.
    const PI = Math.PI;
    const r = Number(readLine());

    // Print the area of the circle:
    const area = PI * (r * r)
    console.log(area);

    // Print the perimeter of the circle:
    const perimeter = 2 * PI * r;
    console.log(perimeter);
    