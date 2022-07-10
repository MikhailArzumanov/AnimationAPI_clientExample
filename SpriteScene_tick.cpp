#include "SpriteScene.hpp"
void SpriteScene::tick() {
	handleEvents();
	handleKeys();
	animation->animate();
	draw();
}