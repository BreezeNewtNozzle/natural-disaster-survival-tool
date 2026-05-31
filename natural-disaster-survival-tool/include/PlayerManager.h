#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H

#include <string>

class PlayerManager {
public:
    PlayerManager();
    void setHealth(int hp);
    int getHealth() const;
    void takeDamage(int amount);
    void heal(int amount);
    bool isAlive() const;
    void setPosition(float x, float y, float z);
    std::string getPosition() const;

private:
    int health;
    float posX, posY, posZ;
};

#endif