#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Base class for Vehicle
class Vehicle {
protected:
    std::string vehicleType;
    int vehicleID;
public:
    Vehicle(int id) : vehicleID(id) {}
    virtual void displayInfo() const = 0; // Polymorphic behavior
    std::string getType() const { return vehicleType; }
    int getID() const { return vehicleID; }
};

// Derived class for Car
class Car : public Vehicle {
public:
    Car(int id) : Vehicle(id) { vehicleType = "Car"; }
    void displayInfo() const override {
        std::cout << "Vehicle Type: Car, ID: " << vehicleID << std::endl;
    }
};

// Derived class for Bus
class Bus : public Vehicle {
public:
    Bus(int id) : Vehicle(id) { vehicleType = "Bus"; }
    void displayInfo() const override {
        std::cout << "Vehicle Type: Bus, ID: " << vehicleID << std::endl;
    }
};

// Derived class for Bike
class Bike : public Vehicle {
public:
    Bike(int id) : Vehicle(id) { vehicleType = "Bike"; }
    void displayInfo() const override {
        std::cout << "Vehicle Type: Bike, ID: " << vehicleID << std::endl;
    }
};

// Traffic Signal class
class TrafficSignal {
private:
    std::string signalState;
public:
    TrafficSignal() : signalState("RED") {}
    void changeState(const std::string& state) {
        signalState = state;
        std::cout << "Signal state changed to: " << signalState << std::endl;
    }
    std::string getState() const { return signalState; }
};

// Static members for global vehicle count
class Intersection {
private:
    static int vehicleCount;
public:
    static void incrementCount() { vehicleCount++; }
    static void decrementCount() { vehicleCount--; }
    static int getCount() { return vehicleCount; }
};

int Intersection::vehicleCount = 0;

// File handling for logging
class TrafficLogger {
public:
    static void logEntry(const Vehicle& vehicle, const std::string& time) {
        std::ofstream logFile("traffic_log.txt", std::ios::app);
        if (logFile.is_open()) {
            logFile << "Vehicle Entry - Type: " << vehicle.getType()
                    << ", ID: " << vehicle.getID() << ", Time: " << time << "\n";
            logFile.close();
        }
    }
    static void logSignalState(const std::string& state, const std::string& time) {
        std::ofstream logFile("traffic_log.txt", std::ios::app);
        if (logFile.is_open()) {
            logFile << "Signal State Change - State: " << state << ", Time: " << time << "\n";
            logFile.close();
        }
    }
};

// Template for searching vehicle records
Vehicle* searchVehicle(Vehicle* vehicles[], int vehicleCount, int key, bool byID) {
    for (int i = 0; i < vehicleCount; ++i) {
        if ((byID && vehicles[i]->getID() == key) || (!byID && vehicles[i]->getType() == std::to_string(key))) {
            return vehicles[i];
        }
    }
    return NULL;
}

int main() {
    const int MAX_VEHICLES = 3;
    Vehicle* vehicles[MAX_VEHICLES];

    // Creating vehicles
    vehicles[0] = new Car(101);
    vehicles[1] = new Bus(202);
    vehicles[2] = new Bike(303);

    // Display vehicle info
    for (int i = 0; i < MAX_VEHICLES; ++i) {
        vehicles[i]->displayInfo();
        Intersection::incrementCount();
    }

    std::cout << "Total vehicles at the intersection: " << Intersection::getCount() << std::endl;

    // Changing traffic signal state
    TrafficSignal signal;
    signal.changeState("GREEN");
    TrafficLogger::logSignalState(signal.getState(), "10:00 AM");

    // Logging vehicle entry
    TrafficLogger::logEntry(*vehicles[0], "10:05 AM");

    // Searching for a vehicle
    int searchID = 101;
    Vehicle* foundVehicle = searchVehicle(vehicles, MAX_VEHICLES, searchID, true);
    if (foundVehicle) {
        std::cout << "Found vehicle: ";
        foundVehicle->displayInfo();
    } else {
        std::cout << "Vehicle not found." << std::endl;
    }

    // Clean up
    for (int i = 0; i < MAX_VEHICLES; ++i) {
        delete vehicles[i];
    }

    return 0;
}

