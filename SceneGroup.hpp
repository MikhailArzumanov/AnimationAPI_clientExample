#pragma once
#include "RectangleScene.hpp"
#include "SpriteScene.hpp"
#include <SFML/Window/Keyboard.hpp>

class SceneGroup {
private:
	RectangleScene* rectangleScene;
	SpriteScene* spriteScene;

	Scene* currentScene;

	sf::RenderWindow* window;
public:
	SceneGroup();

	void proccessKey(sf::Keyboard::Key keyCode);
	bool isLiving();
	void tick();

	~SceneGroup();
};
