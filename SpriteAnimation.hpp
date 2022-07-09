#pragma once
#include <AnmAPI/Animation.hpp>
#include <AnmAPI/IHasPosition.hpp>
#include <AnmAPI/IScalable.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <vector>
#include "point.hpp"

class SpriteAnimation : public AnmAPI::Animation, public AnmAPI::IHasPosition, public AnmAPI::IScalable {
private:
	sf::Texture* texture;
	sf::Sprite* sprite;
	sf::RenderWindow* window;
	int frameWidth, frameHeight;

	point p;
	point dims;
	float scale;

public:
	SpriteAnimation(sf::Texture* texture_, int statesAmount_, sf::RenderWindow* window_, int frameWidth_, int frameHeight_);
	~SpriteAnimation();


	void draw();
	//void animate();

	void setScale(float scale_);
	void setPosition(float x, float y);
};