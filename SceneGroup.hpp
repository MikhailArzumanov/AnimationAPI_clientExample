#pragma once
#include "RectangleScene.hpp"
#include "SpriteScene.hpp"

class SceneGroup {
private:
	RectangleScene* rectangleScene;
	SpriteScene* spriteScene;
	sf::RenderWindow* window;
public:
	SceneGroup();

	bool isLiving();
	void tick();

	~SceneGroup();
};
