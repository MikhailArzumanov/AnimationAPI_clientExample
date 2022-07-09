#include "RectangleScene.hpp"

RectangleScene::~RectangleScene() {
	delete window;
	delete shape;
	delete animation;
}