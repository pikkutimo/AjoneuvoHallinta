#include "MilitaryVehicle.h"
#include <iostream>

MilitaryVehicle::MilitaryVehicle()
 : mCrew{ 0 }, mArmorThickness{ 0 }, mArmament{ "-" }
{}

MilitaryVehicle::~MilitaryVehicle()
{}

MilitaryVehicle::MilitaryVehicle(const std::string& registration, const int& year, const Person& person, const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, 
const std::string& transmission, const std::string& engine, const std::string& mileage, const int& crew, const int& armorThickness, const std::string& armament)
 : Car{ registration, year, person, make, model, body, fueltype, transmission, engine, mileage }, mCrew{ crew }, mArmorThickness{ armorThickness }, mArmament{armament}
{}

MilitaryVehicle::MilitaryVehicle(const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const int& crew, const int& armorThickness, const std::string& armament)
 : Car{ make, model, body, fueltype, transmission, engine, mileage }, mCrew{ crew }, mArmorThickness{ armorThickness }, mArmament{armament}
{}

void MilitaryVehicle::setCrew(const int& crew)
{
    mCrew = crew;
}

void MilitaryVehicle::setArmorThickness(const int& armorThickness)
{
    mArmorThickness = armorThickness;
}

void MilitaryVehicle::setArmament(const std::string& armament)
{
    mArmament = armament;
}

int MilitaryVehicle::getCrew() const
{
    return mCrew;
}

int MilitaryVehicle::getArmorThickness() const
{
    return mArmorThickness;
}

std::string MilitaryVehicle::getArmamanet() const
{
    return mArmament;
}

std::string MilitaryVehicle::honkHorn() const
{
    return "RATTLLLE, KABOOM, RATTLE!";
}

void MilitaryVehicle::printVehicleDetails() const
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
    std::cout << "Crew: " << getCrew() << std::endl;
    std::cout << "ArmorThickness: " << getArmorThickness() << " mm" << std::endl;
    std::cout << "Armament: " << getArmamanet() << std::endl;
}
