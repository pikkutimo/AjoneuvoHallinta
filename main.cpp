#include "Address.h"
#include "Person.h"
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Bus.h"
#include "MilitaryVehicle.h"
#include "VehicleRegister.h"
#include "Tools.h"
#include<iostream>
#include<memory>
#include<limits>
#include<ios>
#include<regex>


int main()
{
    auto vehicleRegister = VehicleRegister::getInstance();

    Person test1("Matti", 23, "Tonttilammintie 3", "34302", "Poikelus");
    auto person1 = std::make_shared<Person>(test1);
    Person test2("Misa", 24, "Panttilammintie 3", "66666", "Pori");
    auto person2 = std::make_shared<Person>(test2);
    Person test3("Maija", 25, "Korttilammintie 3", "11111", "Siikalatva");
    auto person3 = std::make_shared<Person>(test3);
    Person test4("Marika", 26, "Vapaalammintie 3", "68512", "Koilismaa");
    auto person4 = std::make_shared<Person>(test4);
    Person test5("Minna", 27, "Ohjelammintie 3", "35815", "Ullava");
    auto person5 = std::make_shared<Person>(test5);

    Car testCar("ZBC-123", 1999, person1, "Toyota", "Prius", "Hatchback", "Electric", "Automatic", "VVT 23", "10000");
    Truck testTruck("WER-987", 2009, person2, "Tesla", "PoS", "CyberTruck", "Electric", "-", "ElonX", "240000", "1000000");
    Bus testBus("KUE-234", 2019, person3, "Volvo", "PoS", "Nysse", "Diesel", "Manual", "Mauser 12309", "2240000", "55");
    MilitaryVehicle testTank("JNE-123", 1989, person4, "Panther", "PoS", "V4", "Diesel", "Manual", "Mauser 12309", "224000", 3, 67, "105mm cannon, 12,7mm machinegun");
    Car testVan("OTA-313", 1979, person5, "Ford", "Transit", "Van", "Diesel", "Manual", "Cosworth", "123000");

    vehicleRegister->addVehicle(std::make_shared<Car>(testCar));
    vehicleRegister->addVehicle(std::make_shared<Bus>(testBus));
    vehicleRegister->addVehicle(std::make_shared<Car>(testVan));
    vehicleRegister->addVehicle(std::make_shared<Truck>(testTruck));
    vehicleRegister->addVehicle(std::make_shared<MilitaryVehicle>(testTank));

    std::string input;
    bool isOn{true};
    std::regex intExpression{"[0-9]"};
    
    while(isOn)
    {
        PrintMenu();
        std::cout << "******************************************************************************************" << std::endl;
        std::cout << "ENTER:: ";
        InputValidator(input, intExpression);
        int menu = std::stoi(input);
    
        switch (menu) {
        case 1:
            std::cout << "******************************************************************************************" << std::endl;
            vehicleRegister->printVehiclesOutline();
            break;
        case 2:
            std::cout << "******************************************************************************************" << std::endl;
            vehicleRegister->printVehiclesDetails();
            break;
        case 3:
            MenuAddVehicle();
            break;
        case 4:
            RemoveVehicle();
            break;
        case 5:
            SearchVehicle();
            break;
        case 6:
            SortVehicles();
            break;
        case 7:
            EditVehicle();
            break;
        case 8:
            TransferOwnership();
            break;
        case 9:
            isOn=false;
        default:
            menu = 0;
            PrintMenu();
            break;
        }
    }

    std::cout << std::endl;
    std::cout << "Goodbye!" << std::endl;

    return 0;
}