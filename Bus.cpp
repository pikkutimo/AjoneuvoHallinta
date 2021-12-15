#include "Bus.h"
#include <iostream>

Bus::Bus()
 : mPassangerCapacity{ "-" }
{}

Bus::~Bus()
{}

Bus::Bus(const std::string& registration, const int& year,  const Person& person, const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, 
const std::string& transmission, const std::string& engine, const std::string& mileage, const std::string& passangerCapacity)
 : Car{ registration, year, person, make, model, body, fueltype, transmission, engine, mileage }, mPassangerCapacity{ passangerCapacity }
{}

Bus::Bus(const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const std::string& passangerCapacity)
 : Car{ make, model, body, fueltype, transmission, engine, mileage }, mPassangerCapacity{ passangerCapacity }
{}

void Bus::setPassangerCapacity(const std::string& passangerCapacity)
{
    mPassangerCapacity = passangerCapacity;
}

std::string Bus::getPassangerCapacity() const
{
    return mPassangerCapacity;
}

std::string Bus::honkHorn() const
{
    return "NYSSEEEE, NYSSEEEEEEE!";
}

void Bus::printVehicleDetails() const
{
    std::cout << getMake() << " " << getModel() << std::endl;
    std::cout << honkHorn() << std::endl;
    std::cout << "Registration: " << getRegistration() << std::endl;
    std::cout << "Model year: " << getYear() << std::endl;
    if (getOwner()) {
        std::cout << "Owner: " << std::endl;
        getOwner()->printPersonDetails(); 
        std::cout << " " << std::endl;
    }
    std::cout << "Body: " << getBody() << std::endl;
    std::cout << "Fueltype: " << getFuelType() << std::endl;
    std::cout << "Transmission: " << getTransmission() << std::endl;
    std::cout << "Engine: " << getEngine() << std::endl;
    std::cout << "Mileage: " << getMileage() << " km" << std::endl;
    std::cout << "PassangerCapacity: " << getPassangerCapacity() << " kg" << std::endl;
}
