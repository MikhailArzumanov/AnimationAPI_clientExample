#include "SpriteScene.hpp"
#include "SFML/Window/Event.hpp"
#include "SceneGroup.hpp"




void SpriteScene::handleKeyPressed(sf::Event theEvent) {
	switch (theEvent.key.code) {
	case sf::Keyboard::Q:
		scale *= 1.1f;
		break;
	case sf::Keyboard::E:
		scale /= 1.1f;
		break;
	case sf::Keyboard::W:
		animation->setState(2 + wasMovingRight);
		break;
	case sf::Keyboard::S:
		animation->setState(2 + wasMovingRight);
		break;
	case sf::Keyboard::D:
		wasMovingRight = true;
		animation->setState(3);
		break;
	case sf::Keyboard::A:
		wasMovingRight = false;
		animation->setState(2);
		break;
	case sf::Keyboard::R:
		group->proccessKey(theEvent.key.code);
		break;
	}
}