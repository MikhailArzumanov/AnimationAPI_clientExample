#pragma once

namespace AnmAPI {
	class IHasPosition{
public:
		virtual void setPosition(float x, float y) = 0;
	};
}