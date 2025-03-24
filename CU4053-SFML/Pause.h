#pragma once
#include "Framework/BaseLevel.h"
class Pause : public BaseLevel
{
public:
	Pause(sf::RenderWindow* hwnd, Input* in, GameState* gs);
	~Pause();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render();

private:
	// Default variables for level class.

	sf::Font font;
	sf::Text pauseTxt;

};

