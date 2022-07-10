#include "SceneGroup.hpp"

int main(){
	SceneGroup* group = new SceneGroup();
	while (group->isLiving()) {
		group->tick();
	}
	delete group;
}
