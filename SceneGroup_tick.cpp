#include "SceneGroup.hpp"
void SceneGroup::tick() {
	currentScene->tick();
}