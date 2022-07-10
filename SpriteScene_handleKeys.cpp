#include "SpriteScene.hpp"
#include "SFML/Window/Keyboard.hpp"

float SPRITE_SPEED = 0.1;

void SpriteScene::handleKeys() {
	float speed = SPRITE_SPEED * scale;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		rectPosition.y -= speed;
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		rectPosition.y += speed;
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		rectPosition.x -= speed;
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		rectPosition.x += speed;
	else animation->setState(wasMovingRight);
}