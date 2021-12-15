#pragma once

#include "Person.h"
#include "Car.h"
#include <string>
#include <memory>
#include<functional>

class Bus : public Car {
    private:
        std::string mPassangerCapacity;
    public:
        Bus();
        ~Bus();
        Bus(const std::string& registration, const int& year, const Person& person, const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const std::string& passangerCapacity);
        Bus(const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const std::string& passangerCapacity);
        void setPassangerCapacity(const std::string& make);
        std::string getPassangerCapacity() const;
        std::string honkHorn() const override;
        void printVehicleDetails() const override;
};
