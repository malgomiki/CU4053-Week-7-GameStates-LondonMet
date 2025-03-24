#include "Pause.h"

Pause::Pause(sf::RenderWindow* hwnd, Input* in, GameState* gs)
{
	window = hwnd;
	input = in;
	gameState = gs;


	if (!font.loadFromFile("font/msgothic.ttc")) {
		std::cout << "Error loading menu select font.\n";
	}

	pauseTxt.setFont(font);
	pauseTxt.setCharacterSize(24);
	pauseTxt.setPosition(300, 338);
	pauseTxt.setOutlineColor(sf::Color::Black);
	pauseTxt.setOutlineThickness(2.f);
	pauseTxt.setFillColor(sf::Color{ 0xFFD738FF }); //{ 0xFFD738FF }
	pauseTxt.setString("escape to unpause game i give up");
}

Pause::~Pause()
{
}

void Pause::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Escape)) 
	{
		input->setKeyUp(sf::Keyboard::Escape);
		gameState->setCurrentState(State::LEVEL);
	}
}

void Pause::update(float dt)
{
}

void Pause::render()
{
	beginDraw();
	window->draw(pauseTxt);
	endDraw();
}
