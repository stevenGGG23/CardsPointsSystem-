#include <iostream>
#include <iomanip>
using namespace std;

struct CardType {
    string suit;
    string value;
    int points;
};

const int DECK_SIZE = 52;
void FormCards(CardType deck[]);
void DisplayCards(const CardType deck[]);

int main() {
    CardType deck[DECK_SIZE];
    FormCards(deck);
    DisplayCards(deck);
    return 0;
}

void FormCards(CardType deck[]) {
    string suits[] = {"Diamond", "Club", "Heart", "Spade"};
    string values[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    int index = 0;

    for (int s = 0; s < 4; s++) {
        for (int v = 0; v < 13; v++) {
            deck[index].suit = suits[s];
            deck[index].value = values[v];

            // Assign points based on game rules
            if (suits[s] == "Heart") {
                if (v < 9) // Cards 1-9
                    deck[index].points = 5;
                else // 10, J, Q, K
                    deck[index].points = 10;
            } else if (suits[s] == "Spade" && values[v] == "Q") {
                deck[index].points = 100;
            } else if (suits[s] == "Diamond" && values[v] == "J") {
                deck[index].points = -100;
            } else {
                deck[index].points = 0;
            }
            index++;
        }
    }
}

void DisplayCards(const CardType deck[]) {
    cout << "Here is the deck of cards:" << endl;
    cout << left << setw(10) << "SUIT" << setw(6) << "VALUE" << setw(6) << "POINTS" << endl;

    for (int i = 0; i < DECK_SIZE; i++) {
        cout << left << setw(10) << deck[i].suit
             << setw(6) << deck[i].value
             << setw(6) << deck[i].points
             << endl;
    }
}
 
