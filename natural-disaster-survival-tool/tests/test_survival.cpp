#include <cassert>
#include <iostream>
#include "DisasterManager.h"
#include "SurvivalTool.h"
#include "PlayerManager.h"

void testDisasterManager() {
    DisasterManager dm;
    assert(!dm.isDisasterActive());
    dm.startDisaster("Tornado");
    assert(dm.isDisasterActive());
    assert(dm.getCurrentDisaster() == "Tornado");
    dm.stopDisaster();
    assert(!dm.isDisasterActive());
    std::cout << "DisasterManager tests passed." << std::endl;
}

void testSurvivalTool() {
    SurvivalTool st;
    assert(st.getItemCount("MedKit") == 1);
    assert(st.useItem("MedKit") == true);
    assert(st.getItemCount("MedKit") == 0);
    assert(st.useItem("MedKit") == false);
    st.addItem("WaterBottle", 5);
    assert(st.getItemCount("WaterBottle") == 7);
    std::cout << "SurvivalTool tests passed." << std::endl;
}

void testPlayerManager() {
    PlayerManager pm;
    assert(pm.getHealth() == 100);
    assert(pm.isAlive());
    pm.takeDamage(120);
    assert(pm.getHealth() == 0);
    assert(!pm.isAlive());
    pm.heal(50);
    assert(pm.getHealth() == 50);
    pm.setPosition(10.5f, 20.3f, 30.7f);
    assert(pm.getPosition() == "(10.5, 20.3, 30.7)");
    std::cout << "PlayerManager tests passed." << std::endl;
}

int main() {
    testDisasterManager();
    testSurvivalTool();
    testPlayerManager();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}