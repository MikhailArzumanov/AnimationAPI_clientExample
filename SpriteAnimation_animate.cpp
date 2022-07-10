#include "SpriteAnimation.hpp"

void SpriteAnimation::animate() {
	if (++ticksCounter >= ticksPerFrame) {
		ticksCounter = 0, Animation::animate();
	}
}