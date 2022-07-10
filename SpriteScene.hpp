#pragma once
#include "Scene.hpp"
#include "SpriteAnimation.hpp"

class SceneGroup;

class SpriteScene : public Scene{
private:
	SceneGroup* group;
	sf::RenderWindow* window;
	sf::Texture* texture;

	SpriteAnimation* animation;

	bool wasMovingRight;

	point rectPosition;
	float scale;

private:
	void handleKeyPressed(sf::Event theEvent);
	void handleEvents();
	void handleKeys();

	void draw();
public:
	SpriteScene(SceneGroup* group_, sf::RenderWindow* window_);

	bool isLiving();
	void tick();

	~SpriteScene();

};