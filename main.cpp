#include <iostream>

#include "Math.h"

int main() {
    int i1 = Math<int, int>(1, 2).Min(); // 30 (int)
    int i2 = Math<int, float>(3, 4.f).Min(); // 30 (int)
    int i3 = Math<int, double>(5, 6.7).Min(); // 30 (int)

    float f1 = Math<float, int>(8.9f, 10).Min(); // 30.5 (float)
    float f2 = Math<float, float>(10.1f, 11.2f).Min(); // 31.0 (float)
    float f3 = Math<float, double>(13.4f, 15.6).Min(); // 31.0 (float)

    double d1 = Math<double, int>(17.8, 19).Min(); // 30.5 (double)
    double d2 = Math<double, float>(20.1, 21.2f).Min(); // 31.0 (double)
    double d3 = Math<double, double>(23.4, 25.6).Min(); // 31.0 (double)

    std::cout << "int : " << i1 << std::endl;
    std::cout << "int : " << i2 << std::endl;
    std::cout << "int : " << i3 << std::endl;

    std::cout << "float : " << f1 << std::endl;
    std::cout << "float : " << f2 << std::endl;
    std::cout << "float : " << f3 << std::endl;

    std::cout << "double : " << d1 << std::endl;
    std::cout << "double : " << d2 << std::endl;
    std::cout << "double : " << d3 << std::endl;

	return 0;
}
