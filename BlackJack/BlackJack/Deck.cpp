#include "Deck.h"



Deck::Deck(unsigned short numberOfDeckCard )
{
	if (numberOfDeckCard < 1)
		numberOfDeckCard = 1;

	numberOfDeck = numberOfDeck;
	deckOfCard = new LinkedList();

	for (int i = 0; i < numberOfDeckCard; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 2; k < 14; k++)
			{
				PlayingCard *cad = new PlayingCard(k, j);
				deckOfCard->addElement(cad);
				

			}
		}
	}
	deckOfCard->getElements();
	std::cout << "--->tutaj jestem" << std::endl;


}


Deck::~Deck()
{
	/*
	for (int i = 0; i < numberOfDeck; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 2; k < 14; k++)
			{
				//PlayingCard *cad = new PlayingCard(k, j);
				//deckOfCard.push_front(*cad);
				deckOfCard
			}
		}
	}
	*/
	/*
	for (int n : deckOfCard.begin) {
		delete &n;

	}
	while (deckOfCard.empty())
	{
		
		deckOfCard.pop_back();
	}
	*/
}
