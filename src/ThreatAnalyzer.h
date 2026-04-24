#pragma once
#include <vector>
#include "SensorManager.h"

class ThreatAnalyzer {
public:
    std::vector<Object> process(const std::vector<Object>& objects);
};
