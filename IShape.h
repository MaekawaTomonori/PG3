#pragma once
class IShape{
protected:
	float size_ = 0;

public:
	virtual ~IShape() = default;
	virtual void Size() = 0;
	virtual void Draw() = 0;
};

