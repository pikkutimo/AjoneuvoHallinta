#include "VehicleRegister.h"
#include <algorithm>

std::shared_ptr<VehicleRegister> VehicleRegister::instance = nullptr;

std::shared_ptr<VehicleRegister> VehicleRegister::getInstance()
{
    if (!instance) {
        instance = std::shared_ptr<VehicleRegister>(new VehicleRegister());
    }

    return instance;
}

void VehicleRegister::addVehicle(const std::shared_ptr<Vehicle>& vehicle)
{
    mVehicles.push_back(vehicle);
}

std::shared_ptr<Vehicle> VehicleRegister::getVehiclesByRegistration(const std::string& registration)
{
    auto it = std::find_if(
        mVehicles.begin(), mVehicles.end(),
        [registration](const std::shared_ptr<Vehicle>& vehicle) { return vehicle->getRegistration() == registration;}
    );

    if (it != mVehicles.end())
        return *it;
    return nullptr;
}

std::shared_ptr<Vehicle> VehicleRegister::getVehiclesByOwner(const std::string& name)
{
    auto it = std::find_if(
        mVehicles.begin(), mVehicles.end(),
        [name](const std::shared_ptr<Vehicle>& vehicle) { return vehicle->getOwner()->getName() == name;}
    );

    if (it != mVehicles.end())
        return *it;
    return nullptr;
}

// std::vector<std::shared_ptr<Vehicle>> VehicleRegister::getByYear(const int& year)
// {

// }

void VehicleRegister::printVehicles() const
{
    for (auto& vehicle : mVehicles) {
        vehicle->printVehicleDetails();
    }
}