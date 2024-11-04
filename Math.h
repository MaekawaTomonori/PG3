#pragma once
template<typename T, typename T1>

class Math{
    T a;
	T1 b;

public:
	Math(T a, T1 b) :a(a), b(b) {}

    T Add() {
        return T(a + b);
    }

    T Min() {
        return a < b ? a : b;
	}
};

