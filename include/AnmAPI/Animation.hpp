#pragma once
#include "IDrawable.hpp"
#include "IAnimatable.hpp"


namespace AnmAPI {
	class Animation : public IDrawable, public IAnimatable {
	protected:
		int currentFrame;
		int* framesAmounts;
		int currentState;
		int statesAmount;
	public:
		Animation();
		Animation(int statesAmount_, int* framesAmounts_);

		virtual void setState(int stateNum);
		virtual void animate();

		~Animation();
		
	};
}
