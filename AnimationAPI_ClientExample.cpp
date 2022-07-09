#include "RectangleScene.hpp"

int main(){
	RectangleScene* scene = new RectangleScene();
	while (scene->isLving()) {
		scene->tick();
	}
	delete scene;
}
