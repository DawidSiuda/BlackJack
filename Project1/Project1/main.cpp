///#include "WindowOfPlay.h"

#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

void main()
{

	//bool isOpen = false;

	RenderWindow myWindow(VideoMode(1000, 700), "Pac-Man");// tworzy okno
														   //myWindow.setFramerateLimit(60); // limit FPS 60
														   //myWindow.setVerticalSyncEnabled(true);// czekaj na synchronizacje pionow�

														   //Event event;
														   /*
														   while(false)
														   {


														   while (myWindow.pollEvent(event))// petla obs�ugi wydarze�
														   {
														   switch (event.type)
														   {
														   case (Event::Closed):	//obs�uga przycisku zamkni�cia okna
														   {
														   myWindow.close();
														   }
														   }
														   }

														   myWindow.clear(Color::Black);
														   //WindowOfPlay windowOfPlay(&myWindow);
														   myWindow.display();
														   */
														   /*{}*/




	std::cout << "Program sie zakonczyl" << std::endl;

}