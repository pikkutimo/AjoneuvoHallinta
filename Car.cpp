#include "Car.h"

Car::Car()
 : Vehicle{} , mMake{ "-" }, mModel{ "-" }, mBody{ "-" }, mFuelType{ "-" }, mTransmission{ "-" }, mEngine{ "-" }, mMileage{ "-" }
{}

Car::Car(const std::string& registration, const Person& person, const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage)
 : Vehicle{ registration, person }, mMake{ "-" }, mModel{ "-" }, mBody{ "-" }, mFuelType{ "-" }, mTransmission{ "-" }, mEngine{ "-" }, mMileage{ "-" }
{}

Car::Car(const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage)
 : Vehicle{}, mMake{ "-" }, mModel{ "-" }, mBody{ "-" }, mFuelType{ "-" }, mTransmission{ "-" }, mEngine{ "-" }, mMileage{ "-" }
{}
