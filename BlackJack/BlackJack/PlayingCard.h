#pragma once
#include "CardColor.cpp"
#include "CardFigure.cpp"

#include <string>
#include <SFML/Graphics.hpp>

using namespace sf;

class PlayingCard
{
	/*
	static Texture heartBackgroundTexture;
	static Texture titlesBackgroundTexture;
	static Texture cloversBackgroundTexture;
	static Texture pickesBackgroundTexture;

	//static Texture shapeTexture;
	*/
	Texture backgroundTexture;

public:
	CardColor getColor();
	CardFigure getFigure();
	std::string getName();
	Sprite getImage();

	PlayingCard(int setFigure,int setColor);
	PlayingCard(CardFigure setFigure, CardColor setColor);
	PlayingCard();

	~PlayingCard();
private:
	Sprite paintedCard;
	CardColor color;
	CardFigure figure;
};

