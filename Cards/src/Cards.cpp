// Fig. 8.27: main.cpp
// Card shuffling and dealing program.
#include "DeckOfCards.h" // DeckOfCards class definition
#include<iostream>
using namespace std;
int main()
{
   DeckOfCards deckOfCards; // create DeckOfCards object

   deckOfCards.shuffle(); // shuffle the cards in the deck
   deckOfCards.deal(); // deal the cards in the deck

   bool isPair = deckOfCards.pair();
   bool isTwoPairs = deckOfCards.twoPairs();
   bool isThreeOfaKind = deckOfCards.threeOfaKind();
   bool isFourOfaKind = deckOfCards.fourOfaKind();
   bool isFullHouse = deckOfCards.fullHouse(isPair, isThreeOfaKind);
   bool isFlush = deckOfCards.flush();
   bool isStraight = deckOfCards.straight();

   cout << "Pair : " << isPair << endl;
   cout << "Two pairs : " << isTwoPairs << endl;
   cout << "Three of a kind : " << isThreeOfaKind << endl;
   cout << "Four of a kind : " << isFourOfaKind << endl;
   cout << "Full House : " << isFullHouse << endl;
   cout << "Flush : " << isFlush << endl;
   cout << "Straight : " << isStraight << endl;

   bool isPairPlayer2 = deckOfCards.pairPlayer2();
   bool isTwoPairsPlayer2 = deckOfCards.twoPairsPlayer2();
   bool isThreeOfaKindPlayer2 = deckOfCards.threeOfaKindPlayer2();
   bool isFourOfaKindPlayer2 = deckOfCards.fourOfaKindPlayer2();
   bool isFullHousePlayer2 = deckOfCards.fullHousePlayer2(isPairPlayer2, isThreeOfaKindPlayer2);
   bool isFlushPlayer2 = deckOfCards.flushPlayer2();
   bool isStraightPlayer2 = deckOfCards.straightPlayer2();

   cout << "Pair Player2 : " << isPairPlayer2 << endl;
   cout << "Two pairs Player2 : " << isTwoPairsPlayer2 << endl;
   cout << "Three of a kind Player2 : " << isThreeOfaKindPlayer2 << endl;
   cout << "Four of a kind Player2 : " << isFourOfaKindPlayer2 << endl;
   cout << "Full House " << isFullHousePlayer2 << endl;
   cout << "Flush Player2 : " << isFlushPlayer2 << endl;
   cout << "Straight Player2 : " << isStraightPlayer2 << endl;



   return 0; // indicates successful termination
} // end main
