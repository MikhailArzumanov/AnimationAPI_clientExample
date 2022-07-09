#include "RectangleScene.hpp"

RectangleScene::~RectangleScene() {
	delete shape;
	delete animation;
}