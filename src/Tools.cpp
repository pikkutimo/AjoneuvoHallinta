#include "Tools.h"

void RemoveVehicle() {
    std::string registration;
    auto vehicleRegister = VehicleRegister::getInstance();

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Removing Vehicle" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "Registration: " << std::endl;
    std::regex registrationExpression{"[A-Z]{3}-[0-9]{3}"};
    InputValidator(registration, registrationExpression);
    vehicleRegister->removeVehicle(registration);

    return;
}

std::shared_ptr<Person> CreateOwner() {
    std::string name;
    std::string street;
    std::string postalnumber;
    std::string city;
    std::string temp;
    std::regex ageExpression{"[0-9]+"};

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
    InputValidator(temp, ageExpression);
    int age = std::stoi(temp);

    auto person = std::make_shared<Person>(name, age, street, postalnumber, city);

    return person;
}

void CreateCar(){
    std::string registration;
    std::regex registrationExpression{"[A-Z]{3}-[0-9]{3}"};
    std::string temp;
    std::string make;
    std::string model;
    std::string body;
    std::string fuel;
    std::string transmission;
    std::string engine;
    std::string mileage;
    std::regex yearExpression{"[0-9]+"};

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Creating car" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "Registration: " << std::endl;
    InputValidator(registration, registrationExpression);
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
    InputValidator(temp, yearExpression);
    int year = std::stoi(temp);

    std::shared_ptr<Person> person = CreateOwner();
    auto car = std::make_shared<Car>(registration, year, person, make, model, body, fuel, transmission, engine, mileage);

    auto vehicleRegister = VehicleRegister::getInstance();
    vehicleRegister->addVehicle(car);

    return;
}

void CreateMilitaryVehicle(){
    std::shared_ptr<MilitaryVehicle> militaryVehicle;
    std::string registration;
    std::regex registrationExpression{"[A-Z]{3}-[0-9]{3}"};
    std::string temp;
    std::regex numberExpression{"[0-9]+"};
    std::string make;
    std::string model;
    std::string body;
    std::string fuel;
    std::string transmission;
    std::string engine;
    std::string mileage;
    std::string armament;

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Creating Military Vehicle" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "Registration: " << std::endl;
    InputValidator(registration, registrationExpression);
    std::cout << "Model Year: " << std::endl;
    InputValidator(temp, numberExpression);
    int year = std::stoi(temp);
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
    InputValidator(temp, numberExpression);
    int crew = std::stoi(temp);
    std::cout << "Armor Thickness: " << std::endl;
    InputValidator(temp, numberExpression);
    int armorThickness = std::stoi(temp);

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
    std::regex registrationExpression{"[A-Z]{3}-[0-9]{3}"};
    std::string make;
    std::string model;
    std::string body;
    std::string fuel;
    std::string transmission;
    std::string engine;
    std::string mileage;
    std::string temp;
    std::regex numberExpression{"[0-9]+"};
    std::string passengetCapacity;

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Creating Bus" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "Registration: " << std::endl;
    InputValidator(registration, registrationExpression);
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
    InputValidator(temp, numberExpression);
    int year = std::stoi(temp);
    std::cout << "Passanger Capacity: " << std::endl;
    std::getline(std::cin, passengetCapacity);

    std::shared_ptr<Person> person = CreateOwner();
    auto bus = std::make_shared<Bus>(registration, year, person, make, model, body, fuel, transmission, engine, mileage, passengetCapacity);
    auto vehicleRegister = VehicleRegister::getInstance();
    vehicleRegister->addVehicle(bus);

    return;
}

void CreateTruck(){
    std::string registration;
    std::regex registrationExpression{"[A-Z]{3}-[0-9]{3}"};
    std::string temp;
    std::string make;
    std::string model;
    std::string body;
    std::string fuel;
    std::string transmission;
    std::string engine;
    std::string mileage;
    std::string cargoCapacity;
    std::regex numberExpression{"[0-9]+"};

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Creating Truck" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "Registration: " << std::endl;
    InputValidator(registration, registrationExpression);
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
    InputValidator(temp, numberExpression);
    int year = std::stoi(temp);
    std::cout << "Cargo Capacity: " << std::endl;
    std::getline(std::cin, cargoCapacity);

    std::shared_ptr<Person> person = CreateOwner();
    auto truck = std::make_shared<Truck>(registration, year, person, make, model, body, fuel, transmission, engine, mileage, cargoCapacity);
    auto vehicleRegister = VehicleRegister::getInstance();
    vehicleRegister->addVehicle(truck);

    return;
}

void MenuAddVehicle(){
    std::string input;
    std::regex menuExpression{"[1-5]"};

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
    InputValidator(input, menuExpression);
    int addVehicleChoise = std::stoi(input);

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
    std::string input;
    std::regex menuExpression{"[1-4]"};
    std::regex registrationExpression{"[A-Z]{3}-[0-9]{3}"};
    auto vehicleRegister = VehicleRegister::getInstance();
    std::shared_ptr<Vehicle> searchResult{ nullptr };
    std::vector<std::shared_ptr<Vehicle>> resultVector{nullptr};
    std::regex numberExpression{"[0-9]+"};
    int year;


    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "Searching Vehicle" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
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
    InputValidator(input, menuExpression);
    int searchMenu = std::stoi(input); 

    switch (searchMenu) {
        case 1:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The registration:" << std::endl;
            InputValidator(input, registrationExpression);
            searchResult = vehicleRegister->getVehiclesByRegistration(input);
            searchResult->printVehicleDetails();
            break;
        case 2:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The Owners Name:" << std::endl;
            std::getline(std::cin, input);
            searchResult = vehicleRegister->getVehiclesByOwner(input);
            searchResult->printVehicleDetails();
            break;
        case 3:
            std::cout << "******************************************************************************************" << std::endl;
            InputValidator(input, numberExpression);
            year = std::stoi(input);
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
    std::string input;
    std::regex menuExpression{"[1-3]"};
    auto vehicleRegister = VehicleRegister::getInstance();

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "SORT THE LIST OF VEHICLES" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << "\t 1. ASCENDING" << std::endl;
    std::cout << "\t 2. DESCENDING" << std::endl;
    std::cout << std::endl;
    std::cout << "\t 3. CANCEL" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "ENTER:: ";
    InputValidator(input, menuExpression);
    int sortMenu = std::stoi(input);

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

    return;
}

void Editor(std::shared_ptr<Vehicle>& vehicle) {
    std::string temp;
    std::regex menuExpression{"[0-9]+"};
    std::regex registrationExpression{"[A-Z]{3}-[0-9]{3}"};
    std::regex numberExpression{"[0-9]+"};
    int year;
    bool editorOn{true};

    while(editorOn)
    {
        std::cout << "******************************************************************************************" << std::endl;
        std::cout << "EDIT" << std::endl;
        std::cout << "******************************************************************************************" << std::endl;
        vehicle->printVehicleDetails();
        std::cout << std::endl;
        std::cout << "\t 1. REGISTRATION" << std::endl;
        std::cout << "\t 2. YEAR" << std::endl;
        std::cout << "\t 3. MAKE" << std::endl;
        std::cout << "\t 4. MODEL" << std::endl;
        std::cout << "\t 5. BODY" << std::endl;
        std::cout << "\t 6. FUELTYPE" << std::endl;
        std::cout << "\t 7. TRANSMISSION" << std::endl;
        std::cout << "\t 8. ENGINE" << std::endl;
        std::cout << "\t 9. MILEAGE" << std::endl;
        std::cout << std::endl;
        std::cout << "\t 10. CANCEL" << std::endl;
        std::cout << "******************************************************************************************" << std::endl;
        std::cout << std::endl;
        std::cout << "ENTER:: ";
        InputValidator(temp, menuExpression);
        int editMenu = std::stoi(temp);

        switch (editMenu)
        {
            case 1:
                std::cout << "New registration? " << std::endl;
                InputValidator(temp, registrationExpression);
                vehicle->setRegistration(temp);
                break;
            case 2:
                std::cout << "New Year? " << std::endl;
                InputValidator(temp, numberExpression);
                year = std::stoi(temp);
                vehicle->setYear(year);
                break;
            case 3:
                std::cout << "New make? " << std::endl;
                std::getline(std::cin, temp);
                vehicle->setMake(temp);
                break;
            case 4:
                std::cout << "New model? " << std::endl;
                std::getline(std::cin, temp);
                vehicle->setModel(temp);
                break;
            case 5:
                std::cout << "New bodytype? " << std::endl;
                std::getline(std::cin, temp);
                vehicle->setBody(temp);
                break;
            case 6:
                std::cout << "New fueltype? " << std::endl;
                std::getline(std::cin, temp);
                vehicle->setFuelType(temp);
                break;
            case 7:
                std::cout << "New transmission? " << std::endl;
                std::getline(std::cin, temp);
                vehicle->setTransmission(temp);
                break;
            case 8:
                std::cout << "New engine? " << std::endl;
                std::getline(std::cin, temp);
                vehicle->setEngine(temp);
                break;
            case 9:
                std::cout << "New mileage? " << std::endl;
                InputValidator(temp, numberExpression);
                vehicle->setMake(temp);
                break;
            case 10:
                editorOn = false;
                break;
            default:
                break;
        }

    }
    
    return;

}

void EditVehicle() {
    std::string input;
    auto vehicleRegister = VehicleRegister::getInstance();
    std::shared_ptr<Vehicle> searchResult{ nullptr };
    std::regex menuExpression{"[1-3]"};
    std::regex registrationExpression{"[A-Z]{3}-[0-9]{3}"};
    std::regex numberExpression{"[0-9]+"};

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "SEARCH VEHICLE TO EDIT" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
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
    InputValidator(input, menuExpression);
    int searchMenu = std::stoi(input);

    switch (searchMenu) {
        case 1:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The registration:" << std::endl;
            InputValidator(input, registrationExpression);
            searchResult = vehicleRegister->getVehiclesByRegistration(input);
            Editor(searchResult);
            break;
        case 2:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The Owners Name:" << std::endl;
            std::getline(std::cin, input);
            searchResult = vehicleRegister->getVehiclesByOwner(input);
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
    std::regex menuExpression{"[1-3]"};
    std::regex numberExpression{"[0-9]+"};
    std::string temp;
    std::vector<std::shared_ptr<Person>> owners{ nullptr };
    auto vehicleRegister = VehicleRegister::getInstance();
    std::shared_ptr<Person> person;
    int year;
    int index;

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
    InputValidator(temp, menuExpression);
    int searchMenu = std::stoi(temp);

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
            InputValidator(temp, numberExpression);
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
    std::regex menuExpression{"[1-3]"};
    std::regex numberExpression{"[0-9]+"};
    std::regex registrationExpression{"[A-Z]{3}-[0-9]{3}"};

    std::cout << "******************************************************************************************" << std::endl;
    std::cout << "SEARCH VEHICLE TO TRANSFER" << std::endl;
    std::cout << "******************************************************************************************" << std::endl;
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
    InputValidator(search, menuExpression);
    int searchMenu = std::stoi(search);

    switch (searchMenu) {
        case 1:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The registration:" << std::endl;
            std::cout << "******************************************************************************************" << std::endl;
            InputValidator(search, registrationExpression);
            searchResult = vehicleRegister->getVehiclesByRegistration(search);
            if (searchResult)
            {
                searchResult->printVehicleDetails();
                RegisterNewOwner(searchResult);
            }
            
            break;
        case 2:
            std::cout << "******************************************************************************************" << std::endl;
            std::cout << "The Owners Name:" << std::endl;
            std::cout << "******************************************************************************************" << std::endl;
            std::getline(std::cin, search);
            searchResult = vehicleRegister->getVehiclesByOwner(search);
            if (searchResult)
            {
                searchResult->printVehicleDetails();
                RegisterNewOwner(searchResult);
            }
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

void InputValidator(std::string& input, const std::regex& ruleExpression) {
    while(true) {
            std::getline(std::cin, input);
            if (std::regex_match(input, ruleExpression)) {
                break;
            }

            std::cout << "Invalid input." << std::endl;
            std::cout << "ENTER:: ";
        }
    
    return;
}