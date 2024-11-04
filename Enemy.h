#pragma once
#include <string>

class Enemy{
	enum class Phase{
		CHASE,
		ATTACK,
		LEAVE,

        PHASE_MAX
	};

	Phase phase_ = Phase::CHASE;

    std::string name_;

    static void (Enemy::*funcP[])();

private:
	void Chase();
	void Attack();
	void Leave();

	void ChangePhase();
public:
	void Update();
};

