#include "SpriteScene.hpp"


SpriteScene::~SpriteScene() {
	delete animation;
	delete texture;
}