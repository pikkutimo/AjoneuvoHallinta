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
        Vehicle(const std::string& registration, const int& year, const Person& person);
        Vehicle(const std::string& registration, const int& year, const std::string& name, const int& age, const Address& address);
        Vehicle(const std::string& registration, const int& year, const std::string& name, const int& age, const std::string& streetAddress, const std::string& postalNumber, const std::string& postalBranch);
        void setRegistration(const std::string& registration);
        void setYear(const int& year);
        void setOwner(const std::shared_ptr<Person>& person);
        std::string getRegistration() const;
        int getYear() const;
        std::shared_ptr<Person> getOwner() const;
        void transferOwnership(std::shared_ptr<Person> person);
        virtual void printVehicleDetails() const;
};