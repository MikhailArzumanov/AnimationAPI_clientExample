#include "RectangleAnimation.hpp"

RectangleAnimation::RectangleAnimation(sf::RectangleShape* rectangle_, sf::RenderWindow* window_, std::vector<sf::Color> colorFrames_):Animation() {
	rectangle = rectangle_; window = window_; colorFrames = colorFrames_;
	statesAmount = 1;
	framesAmounts = new int[1]{ (int)colorFrames.size() };
}