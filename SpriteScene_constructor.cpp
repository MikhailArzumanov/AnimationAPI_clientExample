#include "SpriteScene.hpp"
#include <SFML/Graphics/Texture.hpp>
#include <vector>
SpriteScene::SpriteScene(SceneGroup* group_, sf::RenderWindow* window_) {
	group = group_; window = window_;
	texture = new sf::Texture;
	texture->loadFromFile("textures/animations.png");
	animation = new SpriteAnimation(texture, 4, std::vector<int>({8,8,8,8}), window, 120, 64, 64);
	rectPosition = {100.f, 100.f}; scale = 1.0f; wasMovingRight = true;
}