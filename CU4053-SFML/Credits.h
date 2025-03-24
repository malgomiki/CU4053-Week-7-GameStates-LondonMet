#pragma once
#include "Framework/BaseLevel.h"
class Credits : public BaseLevel
{
public:
	Credits(sf::RenderWindow* hwnd, Input* in, GameState* gs);
	~Credits();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render();

private:
	// Default variables for level class.

	sf::Font font;
	sf::Text creditTxt;
};

