#include "WindowOfPlay.h"

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

void main()
{

	//bool isOpen = false;

	RenderWindow myWindow(VideoMode(1000, 700), "BlackJack");// tworzy okno

	myWindow.setFramerateLimit(60); // limit FPS 60
	myWindow.setVerticalSyncEnabled(true);// czekaj na synchronizacje pionow�

	Event event;

	while (myWindow.isOpen())
	{


		while (myWindow.pollEvent(event))// petla obs�ugi wydarze�
		{
			switch (event.type)
			{
				case (Event::Closed):	//obs�uga przycisku zamkni�cia okna
				{
					myWindow.close();
				}
				case (Event::KeyPressed): // obs�uga klawiszy klawiatury
				{
					switch (event.key.code)
					{
						case(Keyboard::X):
						{
							WindowOfPlay windowOfPlay(&myWindow);
							windowOfPlay.play();
						}
					}
				}
			}
		}

		myWindow.clear(Color::Black);
		//WindowOfPlay windowOfPlay(&myWindow);
		
		myWindow.display();
		//std::cout << "Program sie zakonczyl" << std::endl;

	}
}