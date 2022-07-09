#include "RectangleScene.hpp"
#include "SFML/Window/Keyboard.hpp"

float speed = 0.4;

void RectangleScene::handleKeys() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		rectPosition.y -= speed;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		rectPosition.y += speed;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		rectPosition.x -= speed;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		rectPosition.x += speed;
}