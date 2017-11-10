#include "Player.h"




void Player::giveCard(PlayingCard card)
{
	if (numberOfCards >= 22)
	{
		std::cout << "ERROR: player have too many cards" << std::endl;
		return;
	}
	playersCard[numberOfCards++] = card;

}

void Player::loseAllCard()
{
	numberOfCards = 0;
}

void Player::showCards()
{
	for (int i = 0; i< numberOfCards; i++)
		std::cout << playersCard[i].getName() << std::endl;
}

int Player::getPoints()
{
	int sum = 0;
	for (int i = 0; i < numberOfCards; i++)
	{
		switch (playersCard[i].getFigure())
		{
		case _2:
			sum += 2;
			break;
		case _3:
			sum += 3;
			break;
		case _4:
			sum += 4;
			break;
		case _5:
			sum += 5;
			break;
		case _6:
			sum += 6;
			break;
		case _7:
			sum += 7;
			break;
		case _8:
			sum += 8;
			break;
		case _9:
			sum += 9;
			break;
		case _10:
			sum += 10;
			break;
		case _J:
		case _Q:
		case _K:
			sum += 10;
			break;
		case _A:
			sum += 11;
			break;
		}

	}
	return sum;
}

PlayingCard * Player::getCardTable()
{
	return playersCard;
}

unsigned short Player::getNumberOfCards()
{
	return numberOfCards;
}

void Player::drawCards(int x, int y, RenderWindow * currentWindow)
{
	Texture backgroundTexture;
	Texture shapeTexture;
	Sprite paintedCard;

	for (int i = 0; i < numberOfCards; i++)
	{
		/*
		switch (playersCard[i].getColor())
		{
		case HEARTS:
			backgroundTexture.loadFromFile("cardsTemplate\\_heart.png");
			break;
		case TILES:
			backgroundTexture.loadFromFile("cardsTemplate\\_karo.png");
			break;
		case CLOVERS:
			backgroundTexture.loadFromFile("cardsTemplate\\_trefl.png");
			break;
		case PICKES:
			backgroundTexture.loadFromFile("cardsTemplate\\_pik.png");
			break;
		}
		paintedCard.setTexture(backgroundTexture);
		*/
		currentWindow->draw(playersCard[i].getImage());
	
	}
}
	

Player::Player()
{
	numberOfCards = 0;
}

Player::~Player()
{
}
