#include "RectangleScene.hpp"


RectangleScene::RectangleScene(SceneGroup* group_, sf::RenderWindow* window_) {
	group = group_;
	window = window_;
	shape = new sf::RectangleShape({ 100.f, 100.f });
	colors = std::vector<sf::Color>({ sf::Color::Black,  sf::Color::Red, sf::Color::Green, sf::Color::Blue});
	animation = new RectangleAnimation(shape, window, colors);
	rectPosition = { 100.f, 100.f };
	scale = 1.0f;
	animation->setPosition(rectPosition.x, rectPosition.y);
	animation->setScale(scale);
}