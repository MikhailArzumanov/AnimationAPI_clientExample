#pragma once


class Scene {
public:
	virtual bool isLiving() = 0;
	virtual void tick() = 0;
};