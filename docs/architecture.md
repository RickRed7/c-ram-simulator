# Architecture

The system follows a modular pipeline:

1. SensorManager → collects object data
2. ThreatAnalyzer → filters threats
3. TrajectorySolver → computes intercept timing
4. WeaponController → executes response

Each module is independent and replaceable.
