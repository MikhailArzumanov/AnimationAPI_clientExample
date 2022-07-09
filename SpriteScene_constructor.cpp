#include "SpriteScene.hpp"
#include <SFML/Graphics/Texture.hpp>

SpriteScene::SpriteScene(SceneGroup* group_, sf::RenderWindow* window_) {
	group = group_; window = window_;
	texture = new sf::Texture("textures/animations.png");
}