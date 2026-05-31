#ifndef SURVIVALTOOL_H
#define SURVIVALTOOL_H

#include <string>
#include <unordered_map>

class SurvivalTool {
public:
    SurvivalTool();
    bool useItem(const std::string& itemName);
    void addItem(const std::string& itemName, int count);
    int getItemCount(const std::string& itemName) const;
    std::unordered_map<std::string, int> getInventory() const;

private:
    std::unordered_map<std::string, int> inventory;
};

#endif