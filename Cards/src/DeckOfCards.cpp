// Fig. 8.26: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
using std::cout;
using std::left;
using std::right;

#include <iomanip>
using std::setw;
#include <vector>
#include <cstdlib> // prototypes for rand and srand
using std::rand;
using std::srand;
#include <iostream>
using namespace std;
#include <ctime> // prototype for time
using std::time;

#include "DeckOfCards.h" // DeckOfCards class definition

// DeckOfCards default constructor initializes deck
DeckOfCards::DeckOfCards() {
	// loop through rows of deck
	for (int column = 0; column <= 12; column++) {
		// loop through colums of deck for current row
		for (int row = 0; row <= 3; row++) {
			deck[row][column] = 0; // initialize slot of deck to 0
		} // end inner for
	} // end outer for
	for (int i = 0; i < 4; i++) {

		handSuit[i] = 0;
		handFace[i] = 0;

	}

	for (int i = 0; i < 4; i++) {

		handSuitPlayer2[i] = 0;
		handFacePlayer2[i] = 0;

	}
	srand(time(0)); // seed random number generator
} // end DeckOfCards default constructor

DeckOfCards::~DeckOfCards() {

}
// shuffle cards in deck
void DeckOfCards::shuffle() {
	int row; // represents suit value of card
	int column; // represents face value of card
	 // seed random number generator
	// for each of the 52 cards, choose a slot of the deck randomly
	for (int card = 1; card <= 52; card++) {
		do // choose a new random location until unoccupied slot is found
		{
			row = rand() % 4; // randomly select the row
			column = rand() % 13; // randomly select the column
		} while (deck[row][column] != 0); // end do...while

		// place card number in chosen slot of deck
		deck[row][column] = card;
	} // end for
} // end function shuffle

// deal cards in deck
void DeckOfCards::deal() {
	// initialize suit array
	static const char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	// initialize face array
	static const char *face[13] = { "Ace", "King", "Queen", "Jack", "Ten",
			"Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two" };
	int i = 0;
	int j = 0;

	cout << "///////////////////////////////////" << endl;
	cout << "Player 1 Cards: " << endl;
	cout << "///////////////////////////////////" << endl;

	// for each of the 52 cards
	for (int card = 1; card <= 5; card++) {
		// loop through rows of deck
		for (int row = 0; row <= 3; row++) {
			// loop through columns of deck for current row
			for (int column = 0; column <= 12; column++) {
				// if slot contains current card, display card
				if (deck[row][column] == card) {
					if (card == 1 || card == 2 || card == 3 || card == 4|| card == 5) {
						cout << setw(5) << right << suit[row] << " of "
						<< setw(8) << left << face[column]
						<< (card % 2 == 0 ? '\n' : '\t') << endl;
						handSuit[i] = row;
						handFace[i] = column;
						i++;
					} //end if
				} // end if
			} // end innermost for
		} // end inner for
	} // end outer for

	cout << "///////////////////////////////////" << endl;
	cout << "Player 2 Cards: " << endl;
	cout << "///////////////////////////////////" << endl;

	for (int card = 6; card <= 10; card++) {
		// loop through rows of deck
		for (int row = 0; row <= 3; row++) {
			// loop through columns of deck for current row
			for (int column = 0; column <= 12; column++) {
				// if slot contains current card, display card
				if (deck[row][column] == card) {
					if (card == 6 || card == 7 || card == 8 || card == 9|| card == 10) {

						cout << setw(5) << right << suit[row] << " of "
						<< setw(8) << left << face[column]
						<< (card % 2 == 0 ? '\n' : '\t') << endl;
						handSuitPlayer2[j] = row;
						handFacePlayer2[j] = column;
						j++;

					} //end if
				} // end if

			} // end innermost for
		} // end inner for
	} // end outer for

} // end function deal

//player 2 functions
bool DeckOfCards::pair() {
	int counters[13] = { 0 };
	int counterPairs = 0;

	for (int i = 0; i < 5; i++) {
		counters[handFace[i]]++;

	}

	for (int i = 0; i < 13; i++) {
		if (counters[i] == 2) {
			counterPairs++;
		}
	}
	for (int i = 0; i < 13; i++) {
		if (counterPairs == 1) {
			return true;
		}
	}

	return false;
}

bool DeckOfCards::twoPairs() {

	int counters[13] = { 0 };
	int counterPairs = 0;

	for (int i = 0; i < 5; i++) {
		counters[handFace[i]]++;

	}

	for (int i = 0; i < 13; i++) {

		cout << counters[i] << " ";

	}
	cout << endl;

	for (int i = 0; i < 13; i++) {
		if (counters[i] == 2) {
			counterPairs++;
			if (counterPairs == 2) {
				return true;
			}
		}
	}

	return false;
}

bool DeckOfCards::threeOfaKind() {
	int counters[13] = { 0 };

	for (int i = 0; i < 5; i++) {
		counters[handFace[i]]++;

	}

	for (int i = 0; i < 13; i++) {
		if (counters[i] == 3) {
			return true;
		}
	}
	return false;
}

bool DeckOfCards::fourOfaKind() {
	int counters[13] = { 0 };

	for (int i = 0; i < 5; i++) {
		counters[handFace[i]]++;

	}

	for (int i = 0; i < 13; i++) {
		if (counters[i] == 4) {
			return true;
		}
	}
	return false;
}

bool DeckOfCards::fullHouse(bool isPair, bool isThreeOfaKind){
//	bool isPair;
//	bool isThreeOfaKind;

	if (isPair == 1 && isThreeOfaKind == 1){
		return true;
	}
	return false;
}

bool DeckOfCards::flush() {

	int counters[13] = { 0 };

	for (int i = 0; i < 4; i++) {
		counters[handSuit[i]]++;
		cout << counters[i] << " ";
	}

	cout << endl;
	for (int i = 0; i < 4; i++) {
		if (counters[i] == 5) {
			return true;
		}
	}
	return false;
}

bool DeckOfCards::straight() {

	int min = handFace[0];

	for (int i = 1; i < 5; i++) {
		if (handFace[i] < min) {

			min = handFace[i];
		}
	}

	int next = min + 1;

	int i = 0;

	while (i < 5) {

		if (handFace[i] == next) {
			next++;
			i = 0;
			i++;

		} else {
			i++;
		}
	}

	if (next == (min + 5)) {

		return true;

	} else {

		return false;

	}

//	vector <int> counters(13, 0);
//
//	for (int i = 0; i < 5; i++) {
//		counters[handFace[i]]++;
//
//	}
//
//	for (int i = 0; i < 13; i++) {
//		if (handFace[i] != (handFace[i+1]-1)) {
//
//			return false;
//		}
//
//	}
//	return true;
}

//player 2 functions
bool DeckOfCards::pairPlayer2() {

	int counters[13] = { 0 };
	int counterPairs = 0;

	for (int i = 0; i < 5; i++) {
		counters[handFacePlayer2[i]]++;

	}

	for (int i = 0; i < 13; i++) {
		if (counters[i] == 2) {
			counterPairs++;
		}
	}

	for (int i = 0; i < 13; i++) {
		if (counterPairs == 1) {
			return true;
		}
	}

	return false;
}

bool DeckOfCards::twoPairsPlayer2() {

	int counters[13] = { 0 };
	int counterPairs = 0;

	for (int i = 0; i < 5; i++) {
		counters[handFacePlayer2[i]]++;

	}

	for (int i = 0; i < 13; i++) {

		cout << counters[i] << " ";

	}
	cout << endl;

	for (int i = 0; i < 13; i++) {
		if (counters[i] == 2){
			counterPairs++;
			if (counterPairs == 2) {
				return true;
			}
		}
	}

	return false;
}

bool DeckOfCards::threeOfaKindPlayer2() {
	int counters[13] = { 0 };

	for (int i = 0; i < 5; i++) {
		counters[handFacePlayer2[i]]++;

	}

	for (int i = 0; i < 13; i++) {
		if (counters[i] == 3) {
			return true;
		}
	}
	return false;
}

bool DeckOfCards::fourOfaKindPlayer2() {
	int counters[13] = { 0 };

	for (int i = 0; i < 5; i++) {
		counters[handFacePlayer2[i]]++;

	}

	for (int i = 0; i < 13; i++) {
		if (counters[i] == 4) {
			return true;
		}
	}
	return false;
}

bool DeckOfCards::fullHousePlayer2(bool isPairPlayer2, bool isThreeOfaKindPlayer2){
//	bool isPairPlayer2;
//	bool isThreeOfaKindPlayer2;

	if (isPairPlayer2 == 1 && isThreeOfaKindPlayer2 == 1){
		return true;
	}
	return false;
}

bool DeckOfCards::flushPlayer2() {

	int counters[13] = { 0 };

	for (int i = 0; i < 5; i++) {
		counters[handSuitPlayer2[i]]++;


	}
	for (int i = 0; i < 4; i++) {

		cout << counters[i] << " ";

	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		if (counters[i] == 5) {
			return true;
		}
	}
	return false;
}

bool DeckOfCards::straightPlayer2() {

	int min = handFacePlayer2[0];

	for (int i = 1; i < 5; i++) {
		if (handFacePlayer2[i] < min) {

			min = handFacePlayer2[i];
		}
	}

	int next = min + 1;

	int i = 0;

	while (i < 5) {

		if (handFacePlayer2[i] == next) {
			next++;
			i = 0;
			i++;

		} else {
			i++;
		}
	}

	if (next == (min + 5)) {

		return true;

	} else {

		return false;

	}
//	vector <int> counters(13, 0);
//
//	for (int i = 0; i < 5; i++) {
//		counters[handFacePlayer2[i]]++;
//
//	}
//
//	for (int i = 0; i < 13; i++) {
//		if (handFacePlayer2[i] != handFacePlayer2[i+1]) {
//
//			return false;
//		}
//
//	}
	return true;
}

