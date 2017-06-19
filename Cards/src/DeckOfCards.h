// Fig. 8.25: DeckOfCards.h
// Definition of class DeckOfCards that
// represents a deck of playing cards.

// DeckOfCards class definition
class DeckOfCards
{
public:
   DeckOfCards();// constructor initializes deck

   void shuffle(); // shuffles cards in deck
   void deal(); // deals cards in deck

   //player 1 functions
   bool pair();
   bool twoPairs();
   bool threeOfaKind();
   bool fourOfaKind();
   bool fullHouse(bool isPair, bool isThreeOfaKind);
   bool flush();
   bool straight();

   //player 2 functions
   bool pairPlayer2();
   bool twoPairsPlayer2();
   bool threeOfaKindPlayer2();
   bool fourOfaKindPlayer2();
   bool fullHousePlayer2(bool isPair, bool isThreeOfaKind);
   bool flushPlayer2();
   bool straightPlayer2();

   virtual ~DeckOfCards();
private:
   int deck[ 4 ][ 13 ]; // represents deck of cards

   int handFace[5];
   int handSuit[4];

   int handFacePlayer2[5];
   int handSuitPlayer2[4];
}; // end class DeckOfCards
