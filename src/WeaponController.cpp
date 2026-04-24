#include "WeaponController.h"
#include <iostream>

void WeaponController::execute(const std::vector<Solution>& solutions) {
    for (auto& s : solutions) {
        if (s.timeToImpact < 5.0f) {
            std::cout << "INTERCEPT: Engaging target at ("
                      << s.target.x << ", "
                      << s.target.y << ", "
                      << s.target.z << ")\n";
        }
    }
}
