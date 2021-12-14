#pragma once

#include "Person.h"
#include <string>
#include <memory>
#include<functional>

class Vehicle {
    private:
        std::string mRegistration;
        std::shared_ptr<Person> mOwner;
    public:
        static int mNumberOfVehicles;
        Vehicle();
        ~Vehicle();
        Vehicle(const std::string& registration, const Person& person);
        Vehicle(const std::string& registration, const std::string& name, const int& age, const Address& address);
        Vehicle(const std::string& registration, const std::string& name, const int& age, const std::string& streetAddress, const std::string& postalNumber, const std::string& postalBranch);
        void transferOwnership(std::shared_ptr<Person> person);
        virtual void printVehicleDetails() const;
};