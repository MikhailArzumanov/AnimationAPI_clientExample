#pragma once
#include <AnmAPI/Animation.hpp>
#include <AnmAPI/IHasPosition.hpp>
#include <AnmAPI/IScalable.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <vector>
#include "point.hpp"

class RectangleAnimation : public AnmAPI::Animation, public AnmAPI::IHasPosition, public AnmAPI::IScalable {
private:
	sf::RectangleShape* rectangle;
	sf::RenderWindow* window;
	std::vector<sf::Color> colorFrames;

	point p;
	point dims;
	float scale;

public:
	RectangleAnimation(sf::RectangleShape* rectangle_, sf::RenderWindow* window_, std::vector<sf::Color> colorFrames_);

	void draw();
	//void animate();

	void setScale(float scale_);
	void setPosition(float x, float y);
};