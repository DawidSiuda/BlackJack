#pragma once
#include "WindowOfPlay.h"
#include "Deck.h"

#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

class WindowOfPlay
{
public:
	
	short play();

	WindowOfPlay(RenderWindow *handleToRenderWindow);
	
	~WindowOfPlay();
public:
	RenderWindow *mainWindow;
	Deck *myDeck;
	void giveSomethink();// usun¹æ 
};

