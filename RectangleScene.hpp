#pragma once
#include "RectangleAnimation.hpp"

class RectangleScene {
private:
	sf::RenderWindow* window;
	sf::RectangleShape* shape;
	std::vector<sf::Color> colors;

	RectangleAnimation* animation;

	point rectPosition;
	float scale;
private:
	void handleKeyPressed(sf::Event theEvent);
	void handleEvents();

	void handleKeys();

	void draw();


public:
	bool isLving();

	void tick();

	RectangleScene();
	~RectangleScene();

};