#include "SpriteAnimation.hpp"

SpriteAnimation::SpriteAnimation(sf::Texture* texture_, int statesAmount_, std::vector<int> framesAmounts_, sf::RenderWindow* window_, int ticksPerFrame_, int frameWidth_, int frameHeight_):Animation() {
	texture = texture_; window = window_; frameWidth = frameWidth_; frameHeight = frameHeight_;
	sprite = new sf::Sprite(*texture); sprite->setTextureRect({ 0,0, frameWidth,frameHeight });
	statesAmount = statesAmount_; framesAmounts = new int[statesAmount];
	for (int i = 0; i < statesAmount; i++)
		framesAmounts[i] = framesAmounts_[i];
	p = {100.f, 100.f}; scale = 1.0f; ticksPerFrame = ticksPerFrame_; ticksCounter = 0;
}