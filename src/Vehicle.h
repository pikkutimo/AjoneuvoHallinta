#pragma once

#include "Person.h"
#include <string>
#include <memory>
#include<functional>

class Vehicle {
    private:
        std::string mRegistration;
        int mYear;
        std::shared_ptr<Person> mOwner;
    public:
        static int mNumberOfVehicles;
        Vehicle();
        ~Vehicle();
        Vehicle(const std::string& registration, const int& year, const std::shared_ptr<Person>& person);
        Vehicle(const std::string& registration, const int& year, const std::string& name, const int& age, const Address& address);
        Vehicle(const std::string& registration, const int& year, const std::string& name, const int& age, const std::string& streetAddress, const std::string& postalNumber, const std::string& postalBranch);
        void setRegistration(const std::string& registration);
        void setYear(const int& year);
        void setOwner(const std::shared_ptr<Person>& person);
        virtual void setMake(const std::string& make) = 0;
        virtual void setModel(const std::string& model) = 0;
        virtual void setBody(const std::string& body) = 0;
        virtual void setFuelType(const std::string& fuelType) = 0;
        virtual void setTransmission(const std::string& transmission) = 0;
        virtual void setEngine(const std::string& engine) = 0;
        virtual void setMileage(const std::string& mileage) = 0;
        std::string getRegistration() const;
        int getYear() const;
        std::shared_ptr<Person> getOwner() const;
        void transferOwnership(std::shared_ptr<Person> person);
        virtual void printVehicleDetails() const;
        virtual void printVehicleOutline() const;
};