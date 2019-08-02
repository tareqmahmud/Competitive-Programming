// Get the middle btn
const btn5 = document.querySelector('#btn5');
const btnClassId = [1, 2, 3, 6, 9, 8, 7, 4];


// after clicked that button rotate the layout like clockwise
btn5.addEventListener('click', () => {
    // Update the array like clockwise, mean add last element to the first or add element index-1
    btnClassId.unshift(btnClassId.pop());
    for (let i = 1, j = 0; i <= 9; i++, j++) {
        if (i === 5) {
            j--;
            continue;
        }
        document.querySelector(`#btn${i}`).innerText = btnClassId[j];
    }
});
