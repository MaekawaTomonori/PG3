
#include <memory>

#include "Circle.h"
#include "Rectangle.h"

int main() {
    std::unique_ptr<IShape> circle = std::make_unique<Circle>(5);
    circle->Size();
    circle->Draw();

    std::unique_ptr<IShape> rectangle = std::make_unique<Rectangle>(5, 10);
    rectangle->Size();
    rectangle->Draw();

	return 0;
}
