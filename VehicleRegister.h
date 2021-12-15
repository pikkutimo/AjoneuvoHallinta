#pragma once

#include "Vehicle.h"
#include <vector>
#include <string>
#include <memory>


class VehicleRegister final {
    private:
        std::vector<std::shared_ptr<Vehicle>> mVehicles;
        VehicleRegister() = default;
        VehicleRegister(const VehicleRegister& vehicleRegister) = delete;
        static std::shared_ptr<VehicleRegister> instance;
    public:
        static std::shared_ptr<VehicleRegister> getInstance();
        void addVehicle(const std::shared_ptr<Vehicle>& vehicle);
        std::shared_ptr<Vehicle> getVehiclesByRegistration(const std::string& registration);
        std::shared_ptr<Vehicle> getVehiclesByOwner(const std::string& name);
        // std::vector<std::shared_ptr<Vehicle>> getByYear(const int& year);
        void printVehicles() const;
};