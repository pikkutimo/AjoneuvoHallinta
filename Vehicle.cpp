#include "Vehicle.h"
#include <iostream>

int Vehicle::mNumberOfVehicles{0};

Vehicle::Vehicle() : mRegistration{ "-" }, mYear{ 0 },  mOwner{ nullptr }
{
    mNumberOfVehicles++;
}

Vehicle::~Vehicle()
{
    mNumberOfVehicles--;
}

Vehicle::Vehicle(const std::string& registration, const int& year, const Person& person)
 : mRegistration{ registration }, mYear{ year }, mOwner{ std::make_shared<Person>( person )}
{
    mNumberOfVehicles++;
}

Vehicle::Vehicle(const std::string& registration, const int& year, const std::string& name, const int& age, const Address& address)
 : mRegistration{ registration }, mYear{ year }, mOwner{ std::make_shared<Person>(name, age, address)}
{
    mNumberOfVehicles++;
}

Vehicle::Vehicle(const std::string& registration, const int& year, const std::string& name, const int& age, const std::string& streetAddress, const std::string& postalNumber, const std::string& postalBranch)
 : mRegistration{ registration }, mYear{ year }, mOwner{ std::make_shared<Person>(name, age, streetAddress, postalNumber, postalBranch)}
{
    mNumberOfVehicles++;
}

void Vehicle::setRegistration(const std::string& registration)
{
    mRegistration = registration;
}

void Vehicle::setYear(const int& year)
{
    mYear = year;
}

void Vehicle::setOwner(const std::shared_ptr<Person>& person)
{
    mOwner = person;
}

std::string Vehicle::getRegistration() const
{
    return mRegistration;
}

int Vehicle::getYear() const
{
    return mYear;
}

std::shared_ptr<Person> Vehicle::getOwner() const
{
    return mOwner;
}

void Vehicle::transferOwnership(std::shared_ptr<Person> person)
{
    mOwner = person;
}

void Vehicle::printVehicleDetails() const
{
    std::cout << mRegistration << std::endl;
    std::cout << mYear << std::endl;
    if (mOwner)
        mOwner->printPersonDetails();
}