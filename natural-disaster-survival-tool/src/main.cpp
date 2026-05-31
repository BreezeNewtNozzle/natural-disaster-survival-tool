#include <iostream>
#include "DisasterManager.h"
#include "SurvivalTool.h"
#include "PlayerManager.h"

int main() {
    DisasterManager disasterMgr;
    SurvivalTool tool;
    PlayerManager player;

    std::cout << "=== Natural Disaster Survival Tool ===" << std::endl;
    std::cout << "Player health: " << player.getHealth() << std::endl;
    std::cout << "Inventory: MedKit x" << tool.getItemCount("MedKit")
              << ", FoodRation x" << tool.getItemCount("FoodRation")
              << ", WaterBottle x" << tool.getItemCount("WaterBottle") << std::endl;

    disasterMgr.startDisaster("Earthquake");
    std::cout << "Disaster started: " << disasterMgr.getCurrentDisaster() << std::endl;

    player.takeDamage(30);
    std::cout << "Player took 30 damage. Health: " << player.getHealth() << std::endl;

    if (tool.useItem("MedKit")) {
        player.heal(50);
        std::cout << "Used MedKit. Health: " << player.getHealth() << std::endl;
    }

    disasterMgr.stopDisaster();
    std::cout << "Disaster ended." << std::endl;

    return 0;
}