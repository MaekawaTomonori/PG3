#include "Enemy.h"

#include <iostream>

void (Enemy::* Enemy::funcP[])() = {
    &Enemy::Chase,
    &Enemy::Attack,
    &Enemy::Leave,
};

void Enemy::Chase() {
	name_ = "接近";
}

void Enemy::Attack() {
	name_ = "射撃";
}

void Enemy::Leave() {
	name_ = "離脱";
}

void Enemy::ChangePhase() {
    phase_ = static_cast<Phase>((static_cast<int>(phase_) + 1) % static_cast<int>(Phase::PHASE_MAX));
}

void Enemy::Update() {
    // 修正: メンバ関数ポインタを呼び出すために this ポインタを使用
	(this->*funcP[static_cast<int>(phase_)])();

    ChangePhase();

    std::cout << name_ << std::endl;
}
