#pragma once
#include <vector>
#include "SensorManager.h"

struct Solution {
    Object target;
    float timeToImpact;
};

class TrajectorySolver {
public:
    std::vector<Solution> calculate(const std::vector<Object>& threats);
};
