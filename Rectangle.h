#pragma once
#include "IShape.h"

class Rectangle final : public IShape{
    float width_ = 0;
    float height_ = 0;

public:
	Rectangle(float width, float height) : width_(width), height_(height) {}
	void Size() override;
	void Draw() override;
};

