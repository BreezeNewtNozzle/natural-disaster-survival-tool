#include "PlayerManager.h"
#include <sstream>

PlayerManager::PlayerManager() : health(100), posX(0.0f), posY(0.0f), posZ(0.0f) {}

void PlayerManager::setHealth(int hp) {
    health = (hp < 0) ? 0 : (hp > 100) ? 100 : hp;
}

int PlayerManager::getHealth() const {
    return health;
}

void PlayerManager::takeDamage(int amount) {
    health -= amount;
    if (health < 0) health = 0;
}

void PlayerManager::heal(int amount) {
    health += amount;
    if (health > 100) health = 100;
}

bool PlayerManager::isAlive() const {
    return health > 0;
}

void PlayerManager::setPosition(float x, float y, float z) {
    posX = x;
    posY = y;
    posZ = z;
}

std::string PlayerManager::getPosition() const {
    std::ostringstream oss;
    oss << "(" << posX << ", " << posY << ", " << posZ << ")";
    return oss.str();
}