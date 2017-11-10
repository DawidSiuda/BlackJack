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
							player.giveCard(myDeck->getCard());
							
							//playersCard[numberOfComputersCard++] = myDeck->getCard();
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
		

		if (myDeck->isEmpty() == false)
		{

			try
			{
				//PlayingCard temp = myDeck->getCard();
				//std::cout << " We have a: "<< temp.getName() << std::endl;
			}
			catch(int)
			{
				std::cout <<"ERROR::new card not founr" <<std::endl;
			}
		}
		else
		{
			myDeck->cardShuffle();

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			std::cout << "Tasuje :" << sumOfFrames << " " << sumOfFrames - temp << std::endl;
			temp = sumOfFrames;
			//myDeck->showDeck();
			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		}
		sumOfFrames++;
		mainWindow->draw(backgrounfPicture);
		///////////////////////////////////////
		sf::BlendMode blendMode(sf::BlendMode::Zero, sf::BlendMode::One, sf::BlendMode::Add, sf::BlendMode::DstAlpha, sf::BlendMode::OneMinusSrcAlpha, sf::BlendMode::Subtract);

		Texture bbackgroundTexture;
		bbackgroundTexture.loadFromFile("whiteBack.png");
		
		Texture backgroundTexture;
		backgroundTexture.loadFromFile("_trefl.png");

		Sprite first(bbackgroundTexture);
		Sprite second(backgroundTexture);

		RenderTexture newTexture;
		newTexture.create(105, 150);
		newTexture.clear(Color::Transparent);
		
		newTexture.draw(first);
		newTexture.draw(second);
		
		
		newTexture.
		
		
		

	
		RectangleShape paintedCard;
		//paintedCard.setTexture(&bbackgroundTexture);
		//paintedCard.setTextureRect(&backgroundTexture);
		paintedCard.setTexture(&newTexture.getTexture());
		//paintedCard.setFillColor(Color::Red);
		paintedCard.setPosition(300, 300);
		paintedCard.setSize(Vector2f(105, 150));
		/*
		RectangleShape paintedCard(Vector2f(100.0f, 100.2f));
		paintedCard.setFillColor(Color::Red);*/
		mainWindow->draw(paintedCard);
		///////////////////////////////////////////
		//player.drawCards(0, 0, mainWindow);
		

		mainWindow->display();

	}
	
	return 0;
}

WindowOfPlay::WindowOfPlay(RenderWindow *handleToRenderWindow)
{
	
	mainWindow = handleToRenderWindow;
	myDeck = new Deck(4);

	loadMap();
}
WindowOfPlay::~WindowOfPlay()
{
	delete myDeck;
}
