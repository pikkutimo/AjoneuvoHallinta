#include "Car.h"
#include <iostream>

Car::Car()
 : Vehicle{} , mMake{ "-" }, mModel{ "-" }, mBody{ "-" }, mFuelType{ "-" }, mTransmission{ "-" }, mEngine{ "-" }, mMileage{ "-" }
{}

Car::~Car()
{}

Car::Car(const std::string& registration, const int& year, const std::shared_ptr<Person>& person, const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage)
 : Vehicle{ registration, year, person }, mMake{ make }, mModel{ model }, mBody{ body }, mFuelType{ fueltype }, mTransmission{ transmission }, mEngine{ engine }, mMileage{ mileage }
{}

Car::Car(const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage)
 : Vehicle{}, mMake{ make }, mModel{ model }, mBody{ body }, mFuelType{ fueltype }, mTransmission{ transmission }, mEngine{ engine }, mMileage{ mileage }
{}

void Car::setMake(const std::string& make)
{
    mMake = make;
}

void Car::setModel(const std::string& model)
{
    mModel = model;
}

void Car::setBody(const std::string& body)
{
    mBody = body;
}

void Car::setFuelType(const std::string& fuelType)
{
    mFuelType = fuelType;
}

void Car::setTransmission(const std::string& transmission)
{
    mTransmission = transmission;
}

void Car::setEngine(const std::string& engine)
{
    mEngine = engine;
}

void Car::setMileage(const std::string& mileage)
{
    mMileage = mileage;
}

std::string Car::getMake() const
{
    return mMake;
}

std::string Car::getModel() const
{
    return mModel;
}

std::string Car::getBody() const
{
    return mBody;
}

std::string Car::getFuelType() const
{
    return mFuelType;
}

std::string Car::getTransmission() const
{
    return mTransmission;
}

std::string Car::getEngine() const
{
    return mEngine;
}

std::string Car::getMileage() const
{
    return mMileage;
}

std::string Car::honkHorn() const
{
    return "Beep, beep!";
}

void Car::printVehicleDetails() const
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
}

void Car::printVehicleOutline() const
{
    std::cout << "Registration: " << getRegistration() << " Model year: " << getYear() << " Make: " << getMake() << " Model: " << getModel() <<  std::endl;
}