#pragma once
#include <vector>
#include "TrajectorySolver.h"

class WeaponController {
public:
    void execute(const std::vector<Solution>& solutions);
};
