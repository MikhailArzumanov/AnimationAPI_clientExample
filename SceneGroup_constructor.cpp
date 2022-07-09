#include "SceneGroup.hpp"

const sf::VideoMode videoMode(1280, 720);
const std::string windowName = "example window";

SceneGroup::SceneGroup() {
	window = new sf::RenderWindow(videoMode, windowName);
	rectangleScene = new RectangleScene(this, window);
	spriteScene = new SpriteScene(this, window);
}