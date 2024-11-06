#include "Circle.h"

#include <iostream>
#include <numbers>
#include <cmath>

void Circle::Size() {
    size_ = std::numbers::pi_v<float> * radius_ * radius_;
}

void Circle::Draw() {
    std::cout << "Size : " << size_ << '\n';
}
