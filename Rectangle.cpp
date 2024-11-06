#include "Rectangle.h"

#include <iostream>

void Rectangle::Size() {
    size_ = width_ * height_;
}

void Rectangle::Draw() {
    std::cout << "Size : " << size_ << '\n';
}
