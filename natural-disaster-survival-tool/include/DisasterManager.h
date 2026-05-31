#ifndef DISASTERMANAGER_H
#define DISASTERMANAGER_H

#include <string>
#include <vector>

class DisasterManager {
public:
    DisasterManager();
    void startDisaster(const std::string& type);
    void stopDisaster();
    bool isDisasterActive() const;
    std::string getCurrentDisaster() const;
    std::vector<std::string> getAvailableDisasters() const;

private:
    bool active;
    std::string currentDisaster;
    std::vector<std::string> disasterList;
};

#endif