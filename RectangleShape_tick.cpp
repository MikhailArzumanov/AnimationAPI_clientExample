#include "RectangleScene.hpp"
void RectangleScene::tick() {
	handleEvents();
	handleKeys();
	animation->animate();
	draw();
}