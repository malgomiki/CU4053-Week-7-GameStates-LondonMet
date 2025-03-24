#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in, GameState* gs)
{
	window = hwnd;
	input = in;
	gameState = gs;

	// initialise game objects

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Escape)) {
		input->setKeyUp(sf::Keyboard::Escape);
		gameState->setCurrentState(State::PAUSE);
	}
	if (input->isKeyDown(sf::Keyboard::LShift)) {
		input->setKeyUp(sf::Keyboard::LShift);
		gameState->setCurrentState(State::CREDITS);
	}
}

// Update game objects
void Level::update(float dt)
{
	
}

// Render level
void Level::render()
{
	beginDraw();

	endDraw();
}
