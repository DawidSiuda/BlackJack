#include "WindowOfPlay.h"


WindowOfPlay::~WindowOfPlay()
{
}

void WindowOfPlay::getSomethink()
{
	printf("----nic--------\n");
}


short WindowOfPlay::play()
{
	Event event;
	
	while (mainWindow->isOpen())
	{

		
		while (mainWindow->pollEvent(event))// petla obs�ugi wydarze�
		{
			switch (event.type)
			{
				case (Event::Closed):	//obs�uga przycisku zamkni�cia okna
				{
					mainWindow->close();
				}
				case (Event::KeyPressed): // obs�uga klawiszy klawiatury
				{
					switch (event.key.code)
					{
						case(Keyboard::X):
						{
							getSomethink();
							return 0;
						}
					}
				}
			}
		}
		mainWindow->clear(Color::Red);
		mainWindow->display();

	}
	
	return 0;
}

WindowOfPlay::WindowOfPlay(RenderWindow *handleToRenderWindow)
{
	mainWindow = handleToRenderWindow;
}

