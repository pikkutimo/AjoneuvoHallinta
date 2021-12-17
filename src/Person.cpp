#include "Person.h"
#include<iostream>

int Person::mNumberOfPersons{0};

Person::Person() : mName{ "Unknown" }, mAge{ 0 }, mAddress{ nullptr }
{
    mNumberOfPersons++;
}

Person::Person(const std::string& name, const int& age) : mName{ name }, mAge{ age }, mAddress{ nullptr }
{
    mNumberOfPersons++;
}

Person::Person(const std::string& name, const int& age, const Address& address)
 : mName{ name }, mAge{ age }, mAddress{std::make_shared<Address>(address)}
{
    mNumberOfPersons++;
}

Person::Person(const std::string& name, const int& age, const std::string& streetAddress, const std::string& postalNumber, const std::string& postalBranch) 
: mName{ name }, mAge{ age }, mAddress{ std::make_shared<Address>(streetAddress, postalNumber, postalBranch) }
{
    mNumberOfPersons++;
}

Person::Person(const Person& Person)
 : mName{ Person.mName }, mAge{ Person.mAge }, mAddress{ Person.mAddress }
{
    mNumberOfPersons++;
}

Person::~Person()
{
    mNumberOfPersons--;
}

void Person::setName(const std::string& name)
{
    mName = name;
}

void Person::setAge(int age)
{
    mAge = age;
}

void Person::setStreetAddress(const std::string& streetAddress)
{
    mAddress->setStreetAddress(streetAddress);
}

void Person::setPostalNumber(const std::string& postalNumber)
{
    mAddress->setPostalNumber(postalNumber);
}

void Person::setPostalBranch(const std::string& postalBranch)
{
    mAddress->setPostalBranch(postalBranch);
}

std::string Person::getName() const
{
    return mName;
}

int Person::getAge() const
{
    return mAge;
}

std::string Person::getStreetAddress() const
{
    return mAddress->getStreetAddress();
}

std::string Person::getPostalNumber() const
{
    return mAddress->getPostalNumber();
}

std::string Person::getPostalBranch() const
{
    return mAddress->getPostalBranch();
}

void Person::printPersonDetails() const
{
   std::cout << mName << std::endl;
   std::cout << mAge << std::endl;
   if (mAddress) {
        std::cout << getStreetAddress() << std::endl;
        std::cout << getPostalNumber() << std::endl;
        std::cout << getPostalBranch() << std::endl;
   }
   
}

int Person::getNumberOfPersons()
{
    return mNumberOfPersons;
}