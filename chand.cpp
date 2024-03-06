#include <iostream>

// Environment Sensor class
class EnvironmentSensor {
public:
    // Function to get current temperature
    int getCurrentTemperature() {
        // Simulated temperature for demonstration
        return 20; // assuming the temperature is 20 degrees Celsius
    }
};

// Water Heater class
class WaterHeater {
public:
    // Function to calculate required temperature
    int calculateRequiredTemperature(int currentTemperature) {
        // Calculate required temperature based on current temperature
        // This is a simplified version for demonstration
        return currentTemperature + 10; // Adding 10 degrees for demonstration
    }
};

// Smart Geyser class
class SmartGeyser {
private:
    EnvironmentSensor sensor; // Instance of EnvironmentSensor
    WaterHeater heater;       // Instance of WaterHeater

public:
    // Function to activate the geyser
    void activateGeyser() {
        // Get current temperature from environment sensor
        int currentTemperature = sensor.getCurrentTemperature();

        // Calculate required temperature using water heater
        int requiredTemperature = heater.calculateRequiredTemperature(currentTemperature);

        // Display the heating temperature
        std::cout << "Heating temperature: " << requiredTemperature << " degrees Celsius\n";
    }
};

// Home Owner class
class HomeOwner {
public:
    // Function to get out of bed
    void getOutOfBed(SmartGeyser& geyser) {
        // Activate the geyser
        geyser.activateGeyser();
    }
};

int main() {
    // Instantiate objects
    SmartGeyser geyser;
    HomeOwner owner;

    // Homeowner gets out of bed
    owner.getOutOfBed(geyser);

    return 0;
}

