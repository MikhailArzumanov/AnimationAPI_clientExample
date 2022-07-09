#include "RectangleScene.hpp"
#include "SFML/Window/Event.hpp"

void RectangleScene::handleKeyPressed(sf::Event theEvent) {
	switch (theEvent.key.code) {
	case sf::Keyboard::Q:
		scale *= 1.1f;
		break;
	case sf::Keyboard::E:
		scale /= 1.1f;
		break;
	}
}