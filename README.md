# CardsPointsSystem- 

This program simulates a deck of 52 playing cards, where each card has a suit (Diamond, Club, Heart, or Spade), a value (A, 2, 3, ..., K), and an associated points value. The points are assigned based on predefined rules:

Cards from the "Heart" suit have points based on their value (1-9 cards = 5 points, 10, J, Q, K = 10 points).
The Queen of Spades is worth 100 points.
The Jack of Diamonds is worth -100 points.
All other cards have 0 points.
The program then outputs the details of the deck, including each card's suit, value, and points, in a formatted table.

Features:
Deck Creation: The program creates a deck of 52 cards, ensuring all combinations of suits and values are covered.
Point Assignment: Points are assigned to each card based on specific game rules.
Display Function: The cards are displayed in a neatly formatted table with columns for suit, value, and points.
How It Works:
FormCards function initializes the deck, assigns suits, values, and points to each card.
DisplayCards function displays the entire deck in a user-friendly format, showing each card's suit, value, and its corresponding points.
Code Structure:
CardType: A structure to represent a card with its suit, value, and points.
DECK_SIZE: A constant that defines the number of cards in a deck (52).
FormCards: Fills the deck with all cards and assigns points based on predefined rules.
DisplayCards: Outputs the deck to the console in a formatted table.

```bash
Here is the deck of cards:
SUIT      VALUE  POINTS
Diamond   A      0     
Diamond   2      0     
Diamond   3      0     
Diamond   4      0     
Diamond   5      0     
Diamond   6      0     
Diamond   7      0     
Diamond   8      0     
Diamond   9      0     
Diamond   10     0     
Diamond   J      -100  
Diamond   Q      0     
Diamond   K      0     
Club      A      0     
Club      2      0     
...
Heart     A      5     
Heart     2      5     
...
Spade     Q      100   
...

