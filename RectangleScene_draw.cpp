#include "RectangleScene.hpp"

void RectangleScene::draw() {
	window->clear(sf::Color::White);
	animation->setScale(scale);
	animation->setPosition(rectPosition.x, rectPosition.y);
	animation->draw();
	window->display();
}