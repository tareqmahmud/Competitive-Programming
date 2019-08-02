/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    // At first print the vowels
    for (let i = 0; i < s.length; i++) {
        let char = s.charAt(i);
        if (char === 'a' || char === 'e' || char === 'i' || char === 'o' || char === 'u') {
            console.log(char);
        }
    }

    // Print the consonant
    for (let i = 0; i < s.length; i++) {
        let char = s.charAt(i);
        if (char !== 'a' && char !== 'e' && char !== 'i' && char !== 'o' && char !== 'u') {
            console.log(char);
        }
    }
}