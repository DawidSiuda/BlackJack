#include "PlayingCard.h"



CardColor PlayingCard::getColor()
{
	return color;
}

CardFigure PlayingCard::getFigure()
{
	return figure;
}

std::string PlayingCard::getName()
{
	std::string name;

	switch (color)
	{
	case HEARTS:
		name = "serce ";
		break;
	case TILES:
		name = "karo ";
		break;
	case CLOVERS:
		name = "trefl ";
		break;
	case PICKES:
		name = "pik ";
		break;
	}

	switch (figure)
	{
	case _2:
		name += "_2";
		break;
	case _3:
		name += "_3";
		break;
	case _4:
		name += "_4";
		break;
	case _5:
		name += "_5";
		break;
	case _6:
		name += "_6";
		break;
	case _7:
		name += "_7";
		break;
	case _8:
		name += "_8";
		break;
	case _9:
		name += "_9";
		break;
	case _10:
		name += "_10";
		break;
	case _J:
		name += "_J";
		break;
	case _Q:
		name += "_Q";
		break;
	case _K:
		name += "_K";
		break;
	case _A:
		name += "_A";
		break;
	}
	return name;
}

PlayingCard::PlayingCard(int setFigure, int setColor)
{
	color = CardColor(setColor);
	figure = CardFigure(setFigure);
}

PlayingCard::PlayingCard(CardFigure setFigure, CardColor setColor)
{
	color = setColor;
	figure = setFigure;
}




PlayingCard::~PlayingCard()
{
}
