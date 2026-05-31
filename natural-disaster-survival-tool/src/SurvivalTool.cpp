#include "SurvivalTool.h"

SurvivalTool::SurvivalTool() {
    inventory["MedKit"] = 1;
    inventory["FoodRation"] = 3;
    inventory["WaterBottle"] = 2;
}

bool SurvivalTool::useItem(const std::string& itemName) {
    auto it = inventory.find(itemName);
    if (it != inventory.end() && it->second > 0) {
        it->second--;
        return true;
    }
    return false;
}

void SurvivalTool::addItem(const std::string& itemName, int count) {
    inventory[itemName] += count;
}

int SurvivalTool::getItemCount(const std::string& itemName) const {
    auto it = inventory.find(itemName);
    if (it != inventory.end()) {
        return it->second;
    }
    return 0;
}

std::unordered_map<std::string, int> SurvivalTool::getInventory() const {
    return inventory;
}