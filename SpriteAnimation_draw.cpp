#include "SpriteAnimation.hpp"

void SpriteAnimation::draw() {
	int xShift = currentFrame * frameWidth;
	int yShift = currentState * frameHeight;
	sprite->setTextureRect({ xShift,yShift,frameWidth,frameHeight });
	sprite->setPosition(p.x, p.y);
	sprite->setScale({ scale, scale });
	window->draw(*sprite);
}