#pragma once
#include "IShape.h"

class Circle : public IShape{
	float radius_ = 0;

public:
	Circle(float radius) : radius_(radius) {}
    void Size() override;
    void Draw() override;
};

