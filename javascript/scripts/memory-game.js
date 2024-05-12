// const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16];
const symbols = ['🍏', '🍏', '🥥', '🥥', '🍓', '🍓', '🫐', '🫐', '🥑', '🥑', '🍌', '🍌', '🍑', '🍑', '🍍', '🍍'];
const resetButton = document.querySelector('button');
// Shuffle the list
const randomOrder = shuffleArray(symbols);
console.log(randomOrder);

function shuffleArray(array) {
    for (let i = array.length - 1; i > 0; i--) {
      const j = Math.floor(Math.random() * (i + 1));
      [array[i], array[j]] = [array[j], array[i]];
    }
    return array;
}
  

resetButton.addEventListener('click', () => {
    
})



document.addEventListener('DOMContentLoaded', () => {
    const cards = document.querySelectorAll('main p');
    const overlay = document.getElementById('overlay');

    cards.forEach(function(card, index) {
        card.addEventListener('click', () => {
            let content = 'Hello';
            if (card.innerHTML == 'H') {
                content = symbols[index];
                card.style.backgroundColor = 'cornsilk';
            }
            else {
                content = 'H';
                card.style.backgroundColor = 'brown';
            }
            card.innerHTML = `${content}`
            // overlay.innerHTML = `<div class="overlay-content">${content}</div>`;
            // overlay.style.display = 'flex'; // Show the overlay
        });
    });

    overlay.addEventListener('click', () => {
        card.innerHTML = `H`
        // overlay.style.display = 'none'; // Hide the overlay when clicked
    });
});
