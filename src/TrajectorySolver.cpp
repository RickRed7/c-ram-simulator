#include "TrajectorySolver.h"
#include <cmath>

std::vector<Solution> TrajectorySolver::calculate(const std::vector<Object>& threats) {
    std::vector<Solution> solutions;

    for (auto& t : threats) {
        float time = t.z / fabs(t.vz);
        solutions.push_back({t, time});
    }

    return solutions;
}
