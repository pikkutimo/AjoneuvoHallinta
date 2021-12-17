#include "Truck.h"
#include <iostream>

Truck::Truck()
 : mCargoCapacity{ "-" }
{}

Truck::~Truck()
{}

Truck::Truck(const std::string& registration, const int& year,  const std::shared_ptr<Person>& person, const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, 
const std::string& transmission, const std::string& engine, const std::string& mileage, const std::string& cargoCapacity)
 : Car{ registration, year, person, make, model, body, fueltype, transmission, engine, mileage }, mCargoCapacity{ cargoCapacity }
{}

Truck::Truck(const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const std::string& cargoCapacity)
 : Car{ make, model, body, fueltype, transmission, engine, mileage }, mCargoCapacity{ cargoCapacity }
{}

void Truck::setCargoCapacity(const std::string& cargoCapacity)
{
    mCargoCapacity = cargoCapacity;
}

std::string Truck::getCargoCapacity() const
{
    return mCargoCapacity;
}

std::string Truck::honkHorn() const
{
    return "HOOOOOOONK, HOOOOOOOOOOOONK!";
}

void Truck::printVehicleDetails() const
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
    std::cout << "CargoCapacity: " << getCargoCapacity() << " kg" << std::endl;
}
