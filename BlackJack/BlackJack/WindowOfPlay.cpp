#include "WindowOfPlay.h"




void WindowOfPlay::getSomethink()
{
	printf("----nic--------\n");
}


short WindowOfPlay::play()
{
	int sumOfFrames=0;
	Event event;
	
	while (mainWindow->isOpen())
	{

		
		while (mainWindow->pollEvent(event))// petla obs³ugi wydarzeñ
		{
			switch (event.type)
			{
				case (Event::Closed):	//obs³uga przycisku zamkniêcia okna
				{
					mainWindow->close();
				}
				case (Event::KeyPressed): // obs³uga klawiszy klawiatury
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

		if (sumOfFrames < 5 && myDeck->isEmpty() == false)
		{
		
			
			try
			{
				PlayingCard temp = myDeck->getCard();
				std::cout << temp.getName() << std::endl;
			}
			catch(int)
			{
				std::cout <<"ERROR::new card not founr" <<std::endl;
			}
				
			//myDeck->showDeck();


		}
		sumOfFrames++;

	}
	
	return 0;
}

WindowOfPlay::WindowOfPlay(RenderWindow *handleToRenderWindow)
{
	mainWindow = handleToRenderWindow;
	myDeck = new Deck(1);
}
WindowOfPlay::~WindowOfPlay()
{
	delete myDeck;
}
