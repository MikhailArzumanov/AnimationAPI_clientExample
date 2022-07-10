#include "SpriteScene.hpp"


void SpriteScene::draw() {
	window->clear(sf::Color::White);
	animation->setScale(scale);
	animation->setPosition(rectPosition.x, rectPosition.y);
	animation->draw();
	window->display();
}