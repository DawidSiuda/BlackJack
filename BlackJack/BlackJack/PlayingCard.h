#pragma once
#include "CardColor.cpp"
#include "CardFigure.cpp"

#include <string>


class PlayingCard
{
public:
	CardColor getColor();
	CardFigure getFigure();
	std::string getName();

	PlayingCard(int setFigure,int setColor);
	PlayingCard(CardFigure setFigure, CardColor setColor);

	~PlayingCard();
private:
	CardColor color;
	CardFigure figure;
};

