/*
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */
function reverseString(s) {
    try {
        s = s.split("");
        s = s.reverse();
        s = s.join("");
    } catch (e) {
        console.log(e.message);
    } finally {
        console.log(s);
    }
}