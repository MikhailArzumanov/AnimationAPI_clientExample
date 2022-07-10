#include "SceneGroup.hpp"

void SceneGroup::proccessKey(sf::Keyboard::Key keyCode){
	switch (keyCode) {
	case sf::Keyboard::R:
		currentScene = rectangleScene;
		break;
	case sf::Keyboard::T:
		currentScene = spriteScene;
		break;
	}
}