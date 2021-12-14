#include "Vehicle.h"
#include <iostream>

int Vehicle::mNumberOfVehicles{0};

Vehicle::Vehicle() : mRegistration{ "-" }, mOwner{ nullptr }
{
    mNumberOfVehicles++;
}

Vehicle::~Vehicle()
{
    mNumberOfVehicles--;
}

Vehicle::Vehicle(const std::string& registration, const Person& person)
 : mRegistration{ registration }, mOwner{ std::make_shared<Person>( person )}
{
    mNumberOfVehicles++;
}

Vehicle::Vehicle(const std::string& registration, const std::string& name, const int& age, const Address& address)
 : mRegistration{ registration }, mOwner{ std::make_shared<Person>(name, age, address)}
{
    mNumberOfVehicles++;
}

Vehicle::Vehicle(const std::string& registration, const std::string& name, const int& age, const std::string& streetAddress, const std::string& postalNumber, const std::string& postalBranch)
 : mRegistration{ registration }, mOwner{ std::make_shared<Person>(name, age, streetAddress, postalNumber, postalBranch)}
{
    mNumberOfVehicles++;
}

void Vehicle::transferOwnership(std::shared_ptr<Person> person)
{
    mOwner = person;
}

void Vehicle::printVehicleDetails() const
{
    std::cout << mRegistration << std::endl;
    if (mOwner)
        mOwner->printPersonDetails();
}