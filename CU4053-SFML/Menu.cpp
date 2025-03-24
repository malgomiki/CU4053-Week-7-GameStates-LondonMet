#include "Menu.h"

Menu::Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs)
{
	window = hwnd;
	input = in;
	gameState = gs;

	if (!font.loadFromFile("font/airstrike.ttf")) {
		std::cout << "Error loading menu font.\n";
	}
	if (!font1.loadFromFile("font/msgothic.ttc")) {
		std::cout << "Error loading menu select font.\n";
	}

	//neither of these load for some reason
	menuTxt.setFont(font);
	menuTxt.setCharacterSize(72);
	menuTxt.setPosition(350, 200);
	menuTxt.setOutlineColor(sf::Color::Black);
	menuTxt.setOutlineThickness(4.f);
	menuTxt.setFillColor(sf::Color{ 0xF0A822FF }); //{ 0xF0A822FF }
	menuTxt.setString("game title goes here");

	menuselTxt.setFont(font1);
	menuselTxt.setCharacterSize(24);
	menuselTxt.setPosition(500, 338);
	menuselTxt.setOutlineColor(sf::Color::Black);
	menuselTxt.setOutlineThickness(2.f);
	menuselTxt.setFillColor(sf::Color{ 0xFFD738FF }); //{ 0xFFD738FF }
	menuselTxt.setString("filler text");
}

Menu::~Menu()
{
}

void Menu::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Return)) {
		input->setKeyUp(sf::Keyboard::Return);
		gameState->setCurrentState(State::LEVEL);
	}
}

void Menu::update(float dt)
{
}

void Menu::render()
{
	beginDraw();
	window->draw(menuTxt);
	window->draw(menuselTxt);
	endDraw();
}
