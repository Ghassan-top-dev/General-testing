// Import necessary React hooks and styles
import React, { useState, useEffect } from 'react';
import './styles.css';

// Custom hook for local storage handling
// The hook manages the state of a key-value pair in localStorage.
const useLocalStorage = (key, initialValue) => {
  // Initialize the state by attempting to retrieve the item from localStorage or using the default value
  const [value, setValue] = useState(() => {
    try {
      const item = window.localStorage.getItem(key);
      return item ? JSON.parse(item) : initialValue;
    } catch (error) {
      return initialValue; // If parsing fails, return the default value
    }
  });

  // Update localStorage whenever the value changes
  useEffect(() => {
    window.localStorage.setItem(key, JSON.stringify(value));
  }, [key, value]); // Effect runs when 'key' or 'value' changes

  return [value, setValue]; // Return the state value and setter
};

const ShoppingListApp = () => {
  // State variables for managing current page, shopping lists, alert notifications, and messages
  const [currentPage, setCurrentPage] = useState('landing'); // Tracks which page is currently displayed
  const [lists, setLists] = useLocalStorage('shopping-lists', []); // Shopping lists, stored in localStorage
  const [showAlert, setShowAlert] = useState(false); // Determines whether to show the alert
  const [alertMessage, setAlertMessage] = useState(''); // Stores the message to be shown in the alert

  // Function to show an alert message for a few seconds
  const showNotification = (message) => {
    setAlertMessage(message); // Set the message to display
    setShowAlert(true); // Show the alert
    setTimeout(() => setShowAlert(false), 3000); // Hide the alert after 3 seconds
  };

  // Landing Page Component (Home Page)
  const LandingPage = () => (
    <div className="landing-page">
      <div className="landing-content">
        <h1>Shoppe 🛒</h1>
        <div className="button-container">
          {/* Buttons to navigate to create a new list or view existing lists */}
          <button onClick={() => setCurrentPage('create')} className="primary-button">
            Create New List 🛍️
          </button>
          <button onClick={() => setCurrentPage('view')} className="secondary-button">
            View Lists 👀
          </button>
        </div>
      </div>
    </div>
  );

  // Create List Component
  const CreateList = () => {
    // State variables for creating a shopping list
    const [items, setItems] = useState([]); // List of items to be added to the shopping list
    const [newItem, setNewItem] = useState(''); // New item input
    const [price, setPrice] = useState(''); // Price of the new item
    const [listName, setListName] = useState(''); // Name of the shopping list
    const [budget, setBudget] = useState(''); // Budget for the shopping list

    // Function to add a new item to the list
    const addItem = () => {
      if (newItem && price) {
        setItems([...items, { name: newItem, price: parseFloat(price), checked: false }]); // Add item to list
        setNewItem(''); // Clear the input field for item
        setPrice(''); // Clear the price input field
      }
    };

    // Function to save the shopping list
    const saveList = () => {



      if (listName && items.length > 0 && budget) {
        const parsedBudget = parseFloat(budget); // Convert budget to float
        const totalSpent = items.reduce((sum, item) => sum + item.price, 0); // Calculate total spent
      
        const remainingBudget = parsedBudget - totalSpent; // Calculate remaining budget
      
        const newList = {
          id: Date.now(), // Unique ID based on the current timestamp
          name: listName, // Name of the shopping list
          items, // Items in the shopping list
          budget: parsedBudget, // Budget for the shopping list
          totalSpent, // Total spent so far
          remainingBudget, // Remaining budget after deducting total spent
        };
      
        setLists([...lists, newList]); // Add the new list to the list of shopping lists
        showNotification('List saved successfully!'); // Show success notification
        setCurrentPage('view'); // Redirect to the "View Lists" page
      }
      
    
    
    };

    return (
      <div className="create-list">
        <div className="form-group">
          <div className="input-group">
            <label>List Name</label>
            <input
              type="text"
              value={listName}
              onChange={(e) => setListName(e.target.value)} // Handle list name input change
              placeholder="My Shopping List"
            />
          </div>
          <div className="input-group">
            <label>Budget</label>
            <div className="budget-input">
              <span>$</span>
              <input
                type="number"
                value={budget}
                onChange={(e) => setBudget(e.target.value)} // Handle budget input change
                placeholder="100.00"
              />
            </div>
          </div>
        </div>

        <div className="add-item-section">
          <div className="add-item-form">
            {/* Inputs for adding a new item and its price */}
            <input
              type="text"
              value={newItem}
              onChange={(e) => setNewItem(e.target.value)} // Handle new item input change
              placeholder="Add item"
            />
            <input
              type="number"
              value={price}
              onChange={(e) => setPrice(e.target.value)} // Handle price input change
              placeholder="Price"
            />
            <button onClick={addItem} className="add-button">+</button> {/* Button to add item */}
          </div>

          {/* Display the list of added items */}
          <div className="items-list">
            {items.map((item, index) => (
              <div key={index} className="item-row">
                <span>{item.name}</span>
                <div className="item-actions">
                  <span>${item.price.toFixed(2)}</span>
                  {/* Button to remove item from the list */}
                  <button
                    onClick={() => setItems(items.filter((_, i) => i !== index))}
                    className="delete-button"
                  >
                    ×
                  </button>
                </div>
              </div>
            ))}
          </div>
        </div>

        {/* Buttons to go back or save the list */}

        <div className="button-row">
          <button onClick={() => setCurrentPage('landing')} className="back-button">
            Back
          </button>
          <button onClick={saveList} className="save-button">
            Save List
          </button>
        </div>
      </div>
    );
  };

  // View Lists Component
  const ViewLists = () => {
    
    // Function to delete a shopping list
    const deleteList = (id) => {
      setLists(lists.filter(list => list.id !== id)); // Remove the list with the matching ID
      showNotification('List deleted successfully!'); // Show deletion success notification
    };

    return (
      <div className="view-lists">
        <div className="lists-container">
          {lists.map(list => (
            <div key={list.id} className="list-card">
              <div className="list-header">
                <h3>{list.name}</h3>

                {/* Button to delete the list */}

                <button onClick={() => deleteList(list.id)} className="delete-button">×</button>
              </div>
              <div className="budget-info">
                <div className="budget-text">
                  <span>Budget: ${list.budget.toFixed(2)}</span>
                  <span>Spent: ${list.totalSpent.toFixed(2)}</span>
                  <span className="remaining-budget">Remaining: ${list.remainingBudget.toFixed(2)}</span>
                </div>
                <div className="progress-bar">

                  {/* Progress bar showing spending against budget */}

                  <div
                    className={`progress ${list.totalSpent > list.budget ? 'over-budget' : ''}`}
                    style={{
                      width: `${Math.min((list.totalSpent / list.budget) * 100, 100)}%`
                    }}
                  />
                </div>
                <div className="items-section">
                  
                  
                  {/* Display items in the list */}


                  {list.items.map((item, index) => (
                    <div key={index} className="item-row">
                      <span>{item.name}</span>
                      <span>${item.price.toFixed(2)}</span>
                    </div>
                  ))}

                </div>
              </div>
            </div>
          ))}
        </div>
        {/* Button to return to the home page */}
        <button onClick={() => setCurrentPage('landing')} className="back-button">
          Back to Home
        </button>
      </div>
    );
  };

  // Alert Component for notifications
  const AlertComponent = () => (
    <div className="alert-container">
      {showAlert && (
        <div className="alert">
          {alertMessage}
        </div>
      )}
    </div>
  );

  // Main render function with conditional page rendering
  return (
    <div className="app">
      <AlertComponent /> {/* Show any alerts */}
      {currentPage === 'landing' && <LandingPage />} {/* Show landing page */}
      {currentPage === 'create' && <CreateList />} {/* Show create list page */}
      {currentPage === 'view' && <ViewLists />} {/* Show view lists page */}
    </div>
  );
};

export default ShoppingListApp;
