#include "SpriteAnimation.hpp"

SpriteAnimation::SpriteAnimation(sf::Texture* texture_, int statesAmount_, sf::RenderWindow* window_, int frameWidth_, int frameHeight_):Animation() {
	texture = texture_; window = window_; frameWidth = frameWidth_; frameHeight = frameHeight_;
	sprite = new sf::Sprite(*texture); sprite->setTextureRect({ 0,0, frameWidth,frameHeight });

}