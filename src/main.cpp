#include "SensorManager.h"
#include "ThreatAnalyzer.h"
#include "TrajectorySolver.h"
#include "WeaponController.h"

int main() {
    SensorManager sensor;
    ThreatAnalyzer analyzer;
    TrajectorySolver solver;
    WeaponController weapon;

    while (true) {
        auto objects = sensor.update();
        auto threats = analyzer.process(objects);
        auto solutions = solver.calculate(threats);
        weapon.execute(solutions);
    }
}
