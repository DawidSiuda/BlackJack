#pragma once
#include "PlayingCard.h"

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
class Player
{
public:
	
	PlayingCard playersCard[22];

	void giveCard(PlayingCard);
	void loseAllCard();
	void showCards(); //show cards in console
	int getPoints();
	PlayingCard *getCardTable();
	unsigned short getNumberOfCards();
	void drawCards(int x, int y, RenderWindow* currentWindow);

	Player();
	~Player();

private:
	unsigned short numberOfCards;
	

};

