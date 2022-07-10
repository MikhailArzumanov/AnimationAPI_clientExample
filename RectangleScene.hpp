#pragma once
#include "Scene.hpp"
#include "RectangleAnimation.hpp"

class SceneGroup;

class RectangleScene : public Scene{
private:
	SceneGroup* group;

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
	RectangleScene(SceneGroup* group_, sf::RenderWindow* window_);

	bool isLiving();
	void tick();

	~RectangleScene();

};