#include "DisasterManager.h"
#include <algorithm>

DisasterManager::DisasterManager() : active(false), currentDisaster("") {
    disasterList = {"Flood", "Earthquake", "Tornado", "VolcanicEruption", "Tsunami"};
}

void DisasterManager::startDisaster(const std::string& type) {
    auto it = std::find(disasterList.begin(), disasterList.end(), type);
    if (it != disasterList.end()) {
        active = true;
        currentDisaster = type;
    }
}

void DisasterManager::stopDisaster() {
    active = false;
    currentDisaster = "";
}

bool DisasterManager::isDisasterActive() const {
    return active;
}

std::string DisasterManager::getCurrentDisaster() const {
    return currentDisaster;
}

std::vector<std::string> DisasterManager::getAvailableDisasters() const {
    return disasterList;
}