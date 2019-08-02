// Get the button
const btn = document.querySelector("#btn");

// After click the button then increment the button value by 1
btn.addEventListener('click', () => {
    btnValue = Number(btn.innerText) + 1;
    btn.innerText = btnValue;
});