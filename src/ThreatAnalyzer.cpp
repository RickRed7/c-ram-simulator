#include "ThreatAnalyzer.h"
#include <cmath>

std::vector<Object> ThreatAnalyzer::process(const std::vector<Object>& objects) {
    std::vector<Object> threats;

    for (auto& obj : objects) {
        float speed = sqrt(obj.vx * obj.vx + obj.vy * obj.vy + obj.vz * obj.vz);

        if (speed > 100) {
            threats.push_back(obj);
        }
    }

    return threats;
}
