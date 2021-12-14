#include "Address.h"
#include "Person.h"
#include "Vehicle.h"
#include<iostream>

// class OmaKuuntelija : public HenkiloLisattyObserver {
//     public:
//         OmaKuuntelija() = default;
//         virtual void henkiloLisatty(const std::string& aNimi) {
//             std::cout << "Event saatu. Lisätty henkilö: " << aNimi << std::endl;
//         }
// };


int main()
{
    Address address;
    address.printAddress();

    Person person;
    person.printPersonDetails();
    
    Vehicle vehicleTest("oii-302", person);

    std::cout << "=================" << std::endl;

    Person test("matti", 23, "Tonntilamm 3", "33432", "Kuolio");
    test.printPersonDetails();

    std::cout << "=================" << std::endl;
    
    Vehicle vehicle("ZIY-876", test);
    vehicle.printVehicleDetails();
    
    return 0;
}