#include "SceneGroup.hpp"

SceneGroup::~SceneGroup() {
	delete spriteScene;
	delete rectangleScene;
	delete window;
}