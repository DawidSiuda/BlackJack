#include "WindowOfPlay.h"

void WindowOfPlay::giveSomethink()
{
	printf("--------nothing--------\n");
}

Sprite WindowOfPlay::loadMap(string addres )
{
	tableTexture.loadFromFile(addres);
	backgrounfPicture.setTexture(tableTexture);
	backgrounfPicture.setPosition(Vector2f(0,0));

	return backgrounfPicture;
}


short WindowOfPlay::play()
{

	int sumOfFrames=0;
	int temp = 0;
	Event event;

	const short BEATS = 0;
	const short PLAYERS_TOUR = 1;
	const short COMPUTERS_TOUR = 2;
	const short SHUFFLE_CARD= 3;
	const short WAIT = 4;

	bool flag_giveCard = false;

	short gameStatus = 1;
	
	GenText tellYourScore("Your Score: ", 100, 250, 40);
	GenText score("", 340, 250, 40);
	
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
							giveSomethink();
							return 0;
							break;
						}
						case(Keyboard::Space): //players get card
						{
							if (gameStatus == PLAYERS_TOUR)
							{
								flag_giveCard = true;
							}
							break;
							
						}
						case(Keyboard::C): // show all players card in console
						{
							player.showCards();
							std::cout <<" -------------------- - "<< std::endl;
							std::cout << "point: "<< player.getPoints() << std::endl;
							//showCards(playersCard, numberOfComputersCard);
							break;

						}
					}
				}
			}
		}
		mainWindow->clear(Color::Red);
		

		/////////////////////////////////////////////////
		//AI of game

		//end of desk
		if (myDeck->isEmpty() == true)
		{
			myDeck->cardShuffle();
			std::cout << "Tasuje :" << sumOfFrames << " " << sumOfFrames - temp << std::endl;
		}

		if (flag_giveCard)
		{
			player.giveCard(myDeck->getCard());
			flag_giveCard = false;

		}

		/////////////////////////////////////////////////
		//show frame

		mainWindow->draw(backgrounfPicture);

		switch (gameStatus)
		{
		case BEATS: 
			break;
		case PLAYERS_TOUR:
			break;
		case COMPUTERS_TOUR:
			break;
		case WAIT:
			break;
		default:
			break;
		}

		tellYourScore.show(mainWindow);
		score.show(mainWindow, player.getPoints());
		
		player.drawCards(110,310, mainWindow, BUTTOM);
		player.drawCards(1000, 30, mainWindow, TOP);
		mainWindow->display();
	}
	
	return 0;
}

WindowOfPlay::WindowOfPlay(RenderWindow *handleToRenderWindow)
{
	
	mainWindow = handleToRenderWindow;

	myDeck = new Deck(1);

	loadMap();

}
WindowOfPlay::~WindowOfPlay()
{
	delete myDeck;
}
