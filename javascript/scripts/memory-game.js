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
    location.reload();
})


    document.addEventListener('DOMContentLoaded', () => {
        const memoryItems = document.querySelectorAll('.memory-item');
    
        memoryItems.forEach(function(item, index) {
            item.addEventListener('click', () => {
                let content = 'Hello';
                if (item.innerHTML == 'H') {
                    content = symbols[index];
                    item.style.backgroundColor = 'cornsilk';
                }
                else {
                    content = 'H';
                    item.style.backgroundColor = 'brown';
                }
                item.innerHTML = `${content}`
            });
        });

    
});