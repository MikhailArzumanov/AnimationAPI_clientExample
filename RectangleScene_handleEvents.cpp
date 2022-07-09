#include "RectangleScene.hpp"
#include "SFML/Window/Event.hpp"

void RectangleScene::handleEvents() {
	sf::Event theEvent;
	while (window->pollEvent(theEvent)) {
		switch (theEvent.type) {
		case sf::Event::KeyPressed:
			handleKeyPressed(theEvent);
			break;
		case sf::Event::Closed:
			window->close();
			break;
		}
	}
}