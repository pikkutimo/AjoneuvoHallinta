#include "Address.h"
#include "Person.h"
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Bus.h"
#include "MilitaryVehicle.h"
#include "VehicleRegister.h"
#include<iostream>
#include<memory>

// class OmaKuuntelija : public HenkiloLisattyObserver {
//     public:
//         OmaKuuntelija() = default;
//         virtual void henkiloLisatty(const std::string& aNimi) {
//             std::cout << "Event saatu. Lisätty henkilö: " << aNimi << std::endl;
//         }
// };


int main()
{
    auto vehicleRegister = VehicleRegister::getInstance();

    Address address;
    Person person;
    
    Vehicle vehicleTest("oii-302", 2000, person);

    Person test("matti", 23, "Tonntilamm 3", "33432", "Kuolio");
    Person test2("katriina", 24, "Koiramäki", "14132", "Posio");
    Vehicle vehicle("ZIY-876", 1900, test);
    Car testCar("zbc-123", 1999, test, "Toyota", "Prius", "Hatchback", "Electric", "Automatic", "VVT 23", "10000");
    Truck testTruck("WER-987", 2010, test, "Volvo", "PoS", "MAC", "Diesel", "Manual", "Mauser 12309", "240000", "1000000");
    Bus testBus("KUE-234", 2018, test, "Volvo", "PoS", "Nysse", "Diesel", "Manual", "Mauser 12309", "2240000", "55");
    testBus.transferOwnership(std::make_shared<Person>(test2));
    MilitaryVehicle tank("JNE-123", 2018, test, "Panther", "PoS", "V4", "Diesel", "Manual", "Mauser 12309", "224000", 3, 67, "105mm cannon, 12,7mm machinegun");

    vehicleRegister->addVehicle(std::make_shared<Car>(testCar));
    vehicleRegister->addVehicle(std::make_shared<Bus>(testBus));


    std::cout << "=================" << std::endl;

    std::cout << "There are " << Vehicle::mNumberOfVehicles << " vehicles total." << std::endl;
    std::cout << "The register contains following vehicles: " << std::endl;
    vehicleRegister->printVehicles();

    return 0;
}