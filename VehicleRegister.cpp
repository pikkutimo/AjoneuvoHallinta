#include "VehicleRegister.h"
#include <algorithm>
#include <iostream>

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

void VehicleRegister::removeVehicle(const std::string& registration)
{
    mVehicles.erase(std::remove_if(mVehicles.begin(), mVehicles.end(),
        [registration](const std::shared_ptr<Vehicle>& vehicle)
        { return vehicle->getRegistration() == registration; }
        ), mVehicles.end());
}

std::shared_ptr<Vehicle> VehicleRegister::getVehiclesByRegistration(const std::string& registration)
{
    std::cout << "Searching db for " << registration << std::endl;

    auto it = std::find_if(
        mVehicles.begin(), mVehicles.end(),
        [&registration](const std::shared_ptr<Vehicle>& vehicle) { return vehicle->getRegistration() == registration; }
    );

    if (it != mVehicles.end()) {
        std::cout << "Found!" << std::endl;
        return *it;
    }
    return nullptr;
}

std::shared_ptr<Vehicle> VehicleRegister::getVehiclesByOwner(const std::string& name)
{
    std::cout << "Searching db!" << std::endl;

    auto it = std::find_if(
        mVehicles.begin(), mVehicles.end(),
        [name](const std::shared_ptr<Vehicle>& vehicle) { return vehicle->getOwner()->getName() == name; }
    );

    if (it != mVehicles.end())
    {
        std::cout << "Found!" << std::endl;
        return *it;
    }
    return nullptr;
}

std::vector<std::shared_ptr<Vehicle>> VehicleRegister::getVehicleByYear(const int& year)
{
    std::vector<std::shared_ptr<Vehicle>> results;
    
    std::copy_if(mVehicles.begin(), mVehicles.end(), std::back_inserter(results),
        [year](const std::shared_ptr<Vehicle>& vehicle) { return vehicle->getYear() == year; });
    
    return results;
}

void VehicleRegister::printVehiclesOutline() const
{
    // std::cout << "The register contains " << Vehicle::mNumberOfVehicles << std::endl;
    for (auto& vehicle : mVehicles) {
        vehicle->printVehicleOutline();
    }
}

void VehicleRegister::printVehiclesDetails() const
{
    // std::cout << "The register contains " << Vehicle::mNumberOfVehicles << std::endl;
    for (auto& vehicle : mVehicles) {
        vehicle->printVehicleDetails();
    }
}

void VehicleRegister::sortAscending()
{
    std::sort(mVehicles.begin(), mVehicles.end(),
        [](const std::shared_ptr<Vehicle>& lVehicle, const std::shared_ptr<Vehicle>& rVehicle)
        { return lVehicle->getYear() < rVehicle->getYear(); });
}

void VehicleRegister::sortDescending()
{
    std::sort(mVehicles.begin(), mVehicles.end(),
        [](const std::shared_ptr<Vehicle>& lVehicle, const std::shared_ptr<Vehicle>& rVehicle)
        { return lVehicle->getYear() > rVehicle->getYear(); });
}

std::vector<std::shared_ptr<Person>> VehicleRegister::GetOwners()
{
    std::vector<std::shared_ptr<Person>> list;
    list.reserve(mVehicles.size());

    std::transform(mVehicles.begin(), mVehicles.end(), std::back_inserter(list),
        [](const std::shared_ptr<Vehicle>& vehicle) { return vehicle->getOwner(); });

    return list;
}
