#include "RectangleAnimation.hpp"


void RectangleAnimation::draw(){
	sf::Color drawableColor = colorFrames[currentFrame];
	rectangle->setFillColor(drawableColor);
	rectangle->setScale({ scale, scale });
	rectangle->setPosition(p.x, p.y);
	window->draw(*rectangle);
}