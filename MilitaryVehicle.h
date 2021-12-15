#pragma once

#include "Person.h"
#include "Car.h"
#include <string>
#include <memory>
#include <vector>
#include<functional>

class MilitaryVehicle : public Car {
    private:
        int mCrew;
        int mArmorThickness;
        std::string mArmament;
    public:
        MilitaryVehicle();
        ~MilitaryVehicle();
        MilitaryVehicle(const std::string& registration, const int& year, const std::shared_ptr<Person>& person, const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const int& crew, const int& armorThickness, const std::string& armament);
        MilitaryVehicle(const std::string& make, const std::string& model, const std::string& body, const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const int& crew, const int& armorThickness, const std::string& armament);
        void setCrew(const int& crew);
        void setArmorThickness(const int& armorThickness);
        void setArmament(const std::string& armament);
        int getCrew() const;
        int getArmorThickness() const;
        std::string getArmamanet() const;
        std::string honkHorn() const override;
        void printVehicleDetails() const override;
};
