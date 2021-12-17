#pragma once

#include "Person.h"
#include "Car.h"
#include <string>
#include <memory>
#include<functional>

class Truck : public Car {
    private:
        std::string mCargoCapacity;
    public:
        Truck();
        ~Truck();
        Truck(const std::string& registration, const int& year, const std::shared_ptr<Person>& person, const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const std::string& cargoCapacity);
        Truck(const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const std::string& cargoCapacity);
        void setCargoCapacity(const std::string& make);
        std::string getCargoCapacity() const;
        std::string honkHorn() const override;
        void printVehicleDetails() const override;
};
