#include "SpriteScene.hpp"
#include "SFML/Window/Keyboard.hpp"

float SPRITE_SPEED = 0.1;

void SpriteScene::handleKeys() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		rectPosition.y -= SPRITE_SPEED;
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		rectPosition.y += SPRITE_SPEED;
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		rectPosition.x -= SPRITE_SPEED;
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		rectPosition.x += SPRITE_SPEED;
	else animation->setState(wasMovingRight);
}