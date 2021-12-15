#include "Tools.h"

void RemoveVehicle() {
    std::string registration;
    auto vehicleRegister = VehicleRegister::getInstance();

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Removing Vehicle" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << std::endl;
    std::cout << "Registration: " << std::endl;
    std::getline(std::cin, registration);
    vehicleRegister->removeVehicle(registration);

    return;
}

std::shared_ptr<Person> CreateOwner() {
    std::string name;
    std::string street;
    std::string postalnumber;
    std::string city;
    std::string temp;
    int age;

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Creating owner" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Name: " << std::endl;
    std::getline(std::cin, name);
    std::cout << "Street Address: " << std::endl;
    std::getline(std::cin, street);
    std::cout << "Postal Number :"<< std::endl;
    std::getline(std::cin, postalnumber);
    std::cout << "City :"<< std::endl;
    std::getline(std::cin, city);
    std::cout << "Age :"<< std::endl;
    std::getline(std::cin, temp);
    age = std::stoi(temp);

    auto person = std::make_shared<Person>(name, age, street, postalnumber, city);

    return person;
}

void CreateCar(){
    std::string registration;
    int year;
    std::string temp;
    std::string make;
    std::string model;
    std::string body;
    std::string fuel;
    std::string transmission;
    std::string engine;
    std::string mileage;

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Creating car" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << std::endl;
    std::cout << "Registration: " << std::endl;
    std::getline(std::cin, registration);
    std::cout << "Make (E.g. Toyota, Chervolet) :"<< std::endl;
    std::getline(std::cin, make);
    std::cout << "Model:" << std::endl;
    std::getline(std::cin, model);
    std::cout << "Body (E.g. sedan, hatchback): " << std::endl;
    std::getline(std::cin, body);
    std::cout << "Fueltype (E.g. diesel, electric): " << std::endl;
    std::getline(std::cin, fuel);
    std::cout << "Transmission (Automatic/Manual): " << std::endl;
    std::getline(std::cin, transmission);
    std::cout << "Engine: " << std::endl;
    std::getline(std::cin, engine);
    std::cout << "Mileage: " << std::endl;
    std::getline(std::cin, mileage);
    std::cout << "Model Year: " << std::endl;
    std::getline(std::cin, temp);
    year = std::stoi(temp);
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    std::shared_ptr<Person> person = CreateOwner();
    auto car = std::make_shared<Car>(registration, year, person, make, model, body, fuel, transmission, engine, mileage);

    auto vehicleRegister = VehicleRegister::getInstance();
    vehicleRegister->addVehicle(car);

    return;
}

void CreateMilitaryVehicle(){
    std::shared_ptr<MilitaryVehicle> militaryVehicle;
    std::string registration;
    int year;
    std::string temp;
    std::string make;
    std::string model;
    std::string body;
    std::string fuel;
    std::string transmission;
    std::string engine;
    std::string mileage;
    std::string armament;
    int crew;
    int armorThickness;

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Creating Military Vehicle" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << std::endl;
    std::cout << "Registration: " << std::endl;
    std::getline(std::cin, registration);
    std::cout << "Model Year: " << std::endl;
    std::getline(std::cin, temp);
    year = std::stoi(temp);
    std::cout << "Make (E.g. Toyota, Chervolet) :"<< std::endl;
    std::getline(std::cin, make);
    std::cout << "Model:" << std::endl;
    std::getline(std::cin, model);
    std::cout << "Body (E.g. sedan, hatchback): " << std::endl;
    std::getline(std::cin, body);
    std::cout << "Fueltype (E.g. diesel, electric): " << std::endl;
    std::getline(std::cin, fuel);
    std::cout << "Transmission (Automatic/Manual): " << std::endl;
    std::getline(std::cin, transmission);
    std::cout << "Engine: " << std::endl;
    std::getline(std::cin, engine);
    std::cout << "Mileage: " << std::endl;
    std::getline(std::cin, mileage);
    std::cout << "Armament: " << std::endl;
    std::getline(std::cin, armament);
    std::cout << "Crew: " << std::endl;
    std::getline(std::cin, temp);
    crew = std::stoi(temp);
    std::cout << "Armor Thickness: " << std::endl;
    std::getline(std::cin, temp);
    armorThickness = std::stoi(temp);

    std::shared_ptr<Person> person = CreateOwner();
    auto tank = std::make_shared<MilitaryVehicle>(registration, year, person, make, model, body, fuel, transmission, engine, mileage, crew, armorThickness, armament);

    // Bus(const std::string& registration, const int& year, const std::shared_ptr<Person>& person, const std::string& make, const std::string& model, const std::string& body, 
    // const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const std::string& passangerCapacity);
    auto vehicleRegister = VehicleRegister::getInstance();
    vehicleRegister->addVehicle(tank);

    return;

}

void CreateBus(){
    std::string registration;
    int year;
    std::string make;
    std::string model;
    std::string body;
    std::string fuel;
    std::string transmission;
    std::string engine;
    std::string mileage;
    std::string temp;
    std::string passengetCapacity;

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Creating Bus" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << std::endl;
    std::cout << "Registration: " << std::endl;
    std::getline(std::cin, registration);
    std::cout << "Make (E.g. Toyota, Chervolet) :"<< std::endl;
    std::getline(std::cin, make);
    std::cout << "Model:" << std::endl;
    std::getline(std::cin, model);
    std::cout << "Body (E.g. sedan, hatchback): " << std::endl;
    std::getline(std::cin, body);
    std::cout << "Fueltype (E.g. diesel, electric): " << std::endl;
    std::getline(std::cin, fuel);
    std::cout << "Transmission (Automatic/Manual): " << std::endl;
    std::getline(std::cin, transmission);
    std::cout << "Engine: " << std::endl;
    std::getline(std::cin, engine);
    std::cout << "Mileage: " << std::endl;
    std::getline(std::cin, mileage);
    std::cout << "Model Year: " << std::endl;
    std::getline(std::cin, temp);
    year = std::stoi(temp);
    std::cout << "Passanger Capacity: " << std::endl;
    std::getline(std::cin, passengetCapacity);

    std::shared_ptr<Person> person = CreateOwner();
    auto bus = std::make_shared<Bus>(registration, year, person, make, model, body, fuel, transmission, engine, mileage, passengetCapacity);

    // Bus(const std::string& registration, const int& year, const std::shared_ptr<Person>& person, const std::string& make, const std::string& model, const std::string& body, 
    // const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const std::string& passangerCapacity);
    auto vehicleRegister = VehicleRegister::getInstance();
    vehicleRegister->addVehicle(bus);

    return;
}

void CreateTruck(){
    std::string registration;
    int year;
    std::string temp;
    std::string make;
    std::string model;
    std::string body;
    std::string fuel;
    std::string transmission;
    std::string engine;
    std::string mileage;
    std::string cargoCapacity;

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Creating Truck" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << std::endl;
    std::cout << "Registration: " << std::endl;
    std::getline(std::cin, registration);
    std::cout << "Make (E.g. Toyota, Chervolet) :"<< std::endl;
    std::getline(std::cin, make);
    std::cout << "Model:" << std::endl;
    std::getline(std::cin, model);
    std::cout << "Body (E.g. sedan, hatchback): " << std::endl;
    std::getline(std::cin, body);
    std::cout << "Fueltype (E.g. diesel, electric): " << std::endl;
    std::getline(std::cin, fuel);
    std::cout << "Transmission (Automatic/Manual): " << std::endl;
    std::getline(std::cin, transmission);
    std::cout << "Engine: " << std::endl;
    std::getline(std::cin, engine);
    std::cout << "Mileage: " << std::endl;
    std::getline(std::cin, mileage);
    std::cout << "Model Year: " << std::endl;
    std::getline(std::cin, temp);
    year = std::stoi(temp);
    std::cout << "Cargo Capacity: " << std::endl;
    std::getline(std::cin, cargoCapacity);

    std::shared_ptr<Person> person = CreateOwner();
    auto truck = std::make_shared<Truck>(registration, year, person, make, model, body, fuel, transmission, engine, mileage, cargoCapacity);

    // Bus(const std::string& registration, const int& year, const std::shared_ptr<Person>& person, const std::string& make, const std::string& model, const std::string& body, 
    // const std::string& fueltype, const std::string& transmission, const std::string& engine, const std::string& mileage, const std::string& passangerCapacity);
    auto vehicleRegister = VehicleRegister::getInstance();
    vehicleRegister->addVehicle(truck);

    return;
}

void MenuAddVehicle(){
    int addVehicleChoise{0};

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "\t 1. CAR" << std::endl;
    std::cout << "\t 2. BUS" << std::endl;
    std::cout << "\t 3. TRUCK" << std::endl;
    std::cout << "\t 4. MILITARY VEHICLE" << std::endl;
    std::cout << std::endl;
    std::cout << "\t 5. CANCEL" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "ENTER:: ";
    std::cin >> addVehicleChoise;

    switch (addVehicleChoise) {
        case 1:
            std::cout << "******************************************************************************************" << std::endl;
            CreateCar();
            std::cout << "Car added" << std::endl;
            break;
        case 2:
            std::cout << "******************************************************************************************" << std::endl;
            CreateBus();
            std::cout << "Bus added" << std::endl;
            break;
        case 3:
            std::cout << "******************************************************************************************" << std::endl;
            CreateTruck();
            std::cout << "Truck added" << std::endl;
            break;
        case 4:
            std::cout << "******************************************************************************************" << std::endl;
            CreateMilitaryVehicle();
            std::cout << "Military Vehicle added" << std::endl;
            break;
        case 5:
            std::cout << "******************************************************************************************" << std::endl;
            return;
        default:
            std::cout << "Uknown item, returning to main menu." << std::endl;
            break;
        }
    
    return;
}

void PrintMenu() {
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "                                  VEHICLE REGISTER" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "\t 1. OVERVIEW" << std::endl;
    std::cout << "\t 2. DETAILED VIEW" << std::endl;
    std::cout << "\t 3. ADD VEHICLE" << std::endl;
    std::cout << "\t 4. REMOVE VEHICLE" << std::endl;
    std::cout << "\t 5. SEARCH" << std::endl;
    std::cout << "\t 6. SORT" << std::endl;
    std::cout << "\t 7. EDIT CAR DETAILS" << std::endl;
    std::cout << "\t 8. TRANSFER OWNERSHIP" << std::endl;
    std::cout << std::endl;
    std::cout << "\t 9. END SESSION" << std::endl;
    std::cout << std::endl;
}

void SearchVehicle() {
    std::string search;
    auto vehicleRegister = VehicleRegister::getInstance();
    std::shared_ptr<Vehicle> searchResult{ nullptr };
    std::vector<std::shared_ptr<Vehicle>> resultVector{nullptr};
    int year;
    int searchMenu;

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Searching Vehicle" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << "\t SEARCH BY:" << std::endl; 
    std::cout << "\t 1. REGISTRATION" << std::endl;
    std::cout << "\t 2. OWNERS NAME" << std::endl;
    std::cout << "\t 3. BY MODEL YEAR" << std::endl;
    std::cout << std::endl;
    std::cout << "\t 4. CANCEL" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "ENTER:: ";
    std::cin >> searchMenu;

    switch (searchMenu) {
        case 1:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The registration:" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::getline(std::cin, search);
            searchResult = vehicleRegister->getVehiclesByRegistration(search);
            searchResult->printVehicleDetails();
            break;
        case 2:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The Owners Name:" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::getline(std::cin, search);
            searchResult = vehicleRegister->getVehiclesByOwner(search);
            searchResult->printVehicleDetails();
            break;
        case 3:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The Year:" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::getline(std::cin, search);
            year = std::stoi(search);
            resultVector = vehicleRegister->getVehicleByYear(year);
            
            for (auto &veh : resultVector)
            {
                veh->printVehicleDetails();
            }

            break;
        case 4:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "Search cancelled!" << std::endl;
            break;
        default:
            std::cout << "Uknown item, returning to main menu." << std::endl;
            break;
        }
    
    return;
}

void SortVehicles() {
    int sortMenu{0};
    auto vehicleRegister = VehicleRegister::getInstance();

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "SORT THE LIST OF VEHICLES" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << "\t 1. ASCENDING" << std::endl;
    std::cout << "\t 2. DESCENDING" << std::endl;
    std::cout << std::endl;
    std::cout << "\t 3. CANCEL" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "ENTER:: ";
    std::cin >> sortMenu;

    switch (sortMenu) {
        case 1:
            vehicleRegister->sortAscending();
            break;
        case 2:
            vehicleRegister->sortDescending();
            break;
        default:
            break;
        }
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    return;
}

void Editor(std::shared_ptr<Vehicle>& vehicle) {
    std::string temp;
    int year;
    int editMenu;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "EDIT" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << std::endl;
    std::cout << "\t 1. REGISTRATION" << std::endl;
    std::cout << "\t 2. YEAR" << std::endl;
    std::cout << std::endl;
    std::cout << "\t 3. CANCEL" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "ENTER:: ";
    std::cin >> editMenu;

    switch (editMenu)
    {
        case 1:
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "New registration? " << std::endl;
            std::getline(std::cin, temp);
            vehicle->setRegistration(temp);
            break;
        case 2:
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "New Year? " << std::endl;
            std::getline(std::cin, temp);
            year = std::stoi(temp);
            vehicle->setYear(year);
            break;
        default:
            break;
    }

    return;

}

void EditVehicle() {
    std::string search;
    auto vehicleRegister = VehicleRegister::getInstance();
    std::shared_ptr<Vehicle> searchResult{ nullptr };
    int year;
    int searchMenu;

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "SEARCH VEHICLE TO EDIT" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << "\t SEARCH BY:" << std::endl; 
    std::cout << "\t 1. REGISTRATION" << std::endl;
    std::cout << "\t 2. OWNERS NAME" << std::endl;
    std::cout << std::endl;
    std::cout << "\t 3. CANCEL" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "ENTER:: ";
    std::cin >> searchMenu;

    switch (searchMenu) {
        case 1:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The registration:" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::getline(std::cin, search);
            searchResult = vehicleRegister->getVehiclesByRegistration(search);
            searchResult->printVehicleDetails();
            Editor(searchResult);
            break;
        case 2:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The Owners Name:" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::getline(std::cin, search);
            searchResult = vehicleRegister->getVehiclesByOwner(search);
            searchResult->printVehicleDetails();
            Editor(searchResult);
            break;
        case 3:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "Edit cancelled!" << std::endl;
            break;
        default:
            std::cout << "Uknown item, returning to main menu." << std::endl;
            break;
        }
    
    return;
}

void RegisterNewOwner(std::shared_ptr<Vehicle>& vehicle) {
    int searchMenu;
    int index;
    std::string temp;
    std::vector<std::shared_ptr<Person>> owners{ nullptr };
    auto vehicleRegister = VehicleRegister::getInstance();
    std::shared_ptr<Person> person;

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "CHOOSE NEW OWNER" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "\t NEW OWNER:" << std::endl; 
    std::cout << "\t 1. CREATE NEW" << std::endl;
    std::cout << "\t 2. USE EXISTING" << std::endl;
    std::cout << std::endl;
    std::cout << "\t 3. CANCEL" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "ENTER:: ";
    std::cin >> searchMenu;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    switch (searchMenu) {
        case 1:
            person = CreateOwner();
            vehicle->transferOwnership(person);
            break;
        case 2:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "Current registered owners:" << std::endl;
            owners = vehicleRegister->GetOwners();
            for (int i = 0; i < owners.size(); i++)
            {
                std::cout << i << ". " << owners.at(i)->getName() << std::endl;
            }
            std::cout << std::endl;
            std::cout << "The new owners index?" << std::endl;
            std::getline(std::cin, temp);
            index = std::stoi(temp);
            vehicle->transferOwnership(owners.at(index));
            break;
        case 3:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "Transfer cancelled!" << std::endl;
            break;
        default:
            std::cout << "Uknown item, returning to main menu." << std::endl;
            break;
        }
    
    return;

}

void TransferOwnership() {
    std::string search;
    auto vehicleRegister = VehicleRegister::getInstance();
    std::shared_ptr<Vehicle> searchResult{ nullptr };
    std::vector<std::shared_ptr<Person>> owners{ nullptr };
    int year;
    int searchMenu;

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "SEARCH VEHICLE TO TRANSFER" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << "\t SEARCH BY:" << std::endl; 
    std::cout << "\t 1. REGISTRATION" << std::endl;
    std::cout << "\t 2. OWNERS NAME" << std::endl;
    std::cout << std::endl;
    std::cout << "\t 3. CANCEL" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "ENTER:: ";
    std::cin >> searchMenu;

    switch (searchMenu) {
        case 1:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The registration:" << std::endl;
            std::cout << "******************************************************************************************" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::getline(std::cin, search);
            searchResult = vehicleRegister->getVehiclesByRegistration(search);
            searchResult->printVehicleDetails();
            RegisterNewOwner(searchResult);
            break;
        case 2:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The Owners Name:" << std::endl;
            std::cout << "******************************************************************************************" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::getline(std::cin, search);
            searchResult = vehicleRegister->getVehiclesByOwner(search);
            searchResult->printVehicleDetails();
            RegisterNewOwner(searchResult);
            break;
        case 3:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "Edit cancelled!" << std::endl;
            break;
        default:
            std::cout << "Uknown item, returning to main menu." << std::endl;
            break;
        }
    
    return;
}