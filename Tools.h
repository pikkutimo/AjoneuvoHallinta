#pragma once
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
#include<limits>
#include<ios>
#include<regex>


void RemoveVehicle();
std::shared_ptr<Person> createOwner();
void CreateCar();
void CreateMilitaryVehicle();
void CreateBus();
void CreateTruck();
std::shared_ptr<Person> CreateOwner();
void MenuAddVehicle();
void PrintMenu();
void SearchVehicle();
void SortVehicles();
void Editor(std::shared_ptr<Vehicle>& vehicle);
void EditVehicle();
void RegisterNewOwner(std::shared_ptr<Vehicle>& vehicle);
void TransferOwnership();
void InputValidator(std::string& input, const std::regex& ruleExpression);