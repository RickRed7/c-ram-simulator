#include "SensorManager.h"

std::vector<Object> SensorManager::update() {
    std::vector<Object> objects;

    // Simulated detection
    objects.push_back({1000, 200, 400, -50, -10, -60});
    objects.push_back({1200, 500, 800, -20, -5, -30});

    return objects;
}
