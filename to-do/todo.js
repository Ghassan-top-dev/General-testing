let items = document.getElementById("listItems");

function saveInput() {
    const input = document.getElementById("userInput").value;
    
    // Retrieve the existing entries or initialize an empty array if none exist
    let entries = JSON.parse(localStorage.getItem('inputList')) || [];
    
    // Add the new input to the array
    entries.push(input);
    
    // Save the updated array back to localStorage
    localStorage.setItem('inputList', JSON.stringify(entries));
    
    // Create a new <li> element for the current input
    let newEntry = document.createElement("li"); 
    newEntry.innerHTML = input;
    items.appendChild(newEntry); 

    document.getElementById("userInput").value = '';  //this clears the text in the input field

}

// Display all saved entries when the page loads
window.onload = function() {
    const savedEntries = JSON.parse(localStorage.getItem('inputList')) || []; //turns items into JSON
    savedEntries.forEach(entry => { 
        // Create an <li> element for each saved entry
        let listItem = document.createElement("li");
        listItem.innerHTML = entry;
        items.appendChild(listItem);
    });
}



function eraser(){ //this clears the list items and saved items

    localStorage.removeItem('inputList');
    
    // Clear all <li> elements from the list without reloading
    items.innerHTML = '';
}
