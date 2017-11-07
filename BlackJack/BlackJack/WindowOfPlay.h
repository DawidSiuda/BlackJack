#pragma once
#include "WindowOfPlay.h"

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
	void getSomethink();// usun¹æ 
};

