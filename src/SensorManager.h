#pragma once
#include <vector>

struct Object {
    float x, y, z;
    float vx, vy, vz;
};

class SensorManager {
public:
    std::vector<Object> update();
};
