#pragma once

#include "Person.h"
#include "Vehicle.h"
#include <string>
#include <memory>
#include<functional>

class Car : public Vehicle {
    private:
        std::string mMake;
        std::string mModel;
        std::string mBody;
        std::string mFuelType;
        std::string mTransmission;
        std::string mEngine;
        std::string mMileage;
    public:
        Car();
        ~Car();
        Car(const std::string& registration, const int& year, const std::shared_ptr<Person>& person, const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage);
        Car(const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage);
        void setMake(const std::string& make) override;
        void setModel(const std::string& model) override;
        void setBody(const std::string& body) override;
        void setFuelType(const std::string& fuelType) override;
        void setTransmission(const std::string& transmission) override;
        void setEngine(const std::string& engine) override;
        void setMileage(const std::string& mileage) override;
        std::string getMake() const;
        std::string getModel() const;
        std::string getBody() const;
        std::string getFuelType() const;
        std::string getTransmission() const;
        std::string getEngine() const;
        std::string getMileage() const;
        virtual std::string honkHorn() const;
        void printVehicleDetails() const override;
        void printVehicleOutline() const final;
};
