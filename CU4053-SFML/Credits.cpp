#include "Credits.h"

Credits::Credits(sf::RenderWindow* hwnd, Input* in, GameState* gs)
{
	window = hwnd;
	input = in;
	gameState = gs;

	creditTxt.setFont(font);
	creditTxt.setCharacterSize(24);
	creditTxt.setPosition(300, 338);
	creditTxt.setOutlineColor(sf::Color::Black);
	creditTxt.setOutlineThickness(2.f);
	creditTxt.setFillColor(sf::Color{ 0xFFD738FF }); //{ 0xFFD738FF }
	creditTxt.setString("escape to close game");
}

Credits::~Credits()
{
}

void Credits::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Escape)) {
		exit(0);
	}
}

void Credits::update(float dt)
{
}

void Credits::render()
{
	beginDraw();
	window->draw(creditTxt);
	endDraw();
}
