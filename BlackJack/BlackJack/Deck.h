#pragma once
#include "CardColor.cpp"
#include "CardFigure.cpp"
#include "PlayingCard.h"
#include "LinkedList.h"


using namespace std;

class Deck
{
public:
	Deck(unsigned short numberOfDeckCard = 1);
	~Deck();
private:
	LinkedList *deckOfCard;
	 unsigned short numberOfDeck;
};

